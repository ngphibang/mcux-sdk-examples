/*
 * Copyright 2020-2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _APP_STREAMER_H_
#define _APP_STREAMER_H_

/* streamer library includes. */
#include "streamer_api.h"
#include "streamer_element_properties.h"
#include "ringbuffer.h"

#include "app_data.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Maestro network audio buffer size */
#define AUDIO_BUFFER_SIZE (30 * 1024)

/*! @brief Maestro Streamer interface structure */
typedef struct _streamer_handle_t
{
    STREAMER_T *streamer;
    volatile bool audioPlaying;
} streamer_handle_t;

typedef enum
{
    AUDIO_SINK,
    FILE_SINK,
    VIT_SINK
} out_sink_t;
/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Initialize the Maestro streamer interface
 *
 * This function initializes the Maestro streamer library, and initializes the PCM
 * output interface.  This function should be called before creating a streamer
 * handle.
 */
void STREAMER_Init(void);

#ifdef MULTICHANNEL_EXAMPLE
/*!
 * @brief Create an Maestro streamer interface handle
 *
 * This function creates an Maestro streamer interface and starts a task for
 * handling pcm files
 *
 * @param handle Pointer to input handle
 * @param out sink type
 * @return kStatus_Success on success, otherwise an error.
 */

status_t STREAMER_PCM_Create(char *filename, int volume);
#else
/*!
 * @brief Create an Maestro streamer interface handle
 *
 * This function creates an Maestro streamer interface and starts a task for
 * handling mic
 *
 * @param handle Pointer to input handle
 * @param volume Output volume
 * @return kStatus_Success on success, otherwise an error.
 */

status_t STREAMER_file_Create(char *filename, int volume);
#endif

/*!
 * @brief Destroy an Maestro streamer interface handle
 *
 * This function destroys an Maestro streamer interface and frees associated memory.
 *
 * @param handle Pointer to input handle
 */
void STREAMER_Destroy(streamer_handle_t *handle);

/*!
 * @brief Start audio playback for the streamer interface
 *
 * This function puts the streamer in a playing state, and begins pulling data
 * from the internal ring buffer, filled with calls to STREAMER_Start.
 *
 * @param handle Pointer to input handle
 */
void STREAMER_Start(streamer_handle_t *handle);

/*!
 * @brief Stop audio playback for the streamer interface
 *
 * This function puts the streamer in a stopped state, and ends playback from
 * the audio buffer.  The internal audio buffer is cleared of any data.
 *
 * @param handle Pointer to input handle
 */
void STREAMER_Stop(streamer_handle_t *handle);

/*!
 * @brief Check if streamer interface is playing
 *
 * This function returns true/false of the playing state for the interface
 *
 * @param handle Pointer to input handle
 * @return true if playing, false if not
 */
bool STREAMER_IsPlaying(streamer_handle_t *handle);

/*!
 * @brief Write audio data to the streamer interface
 *
 * This function pushes data onto the internal audio ring buffer for processing
 * by the audio streamer.
 *
 * @param data Pointer to audio data
 * @param size Size in bytes of the audio data
 * @return Number of bytes successfully written.  If this is less than the
 *         'size' parameter, an overflow has occured.
 */
int STREAMER_Write(uint8_t *data, uint32_t size);

/*!
 * @brief Read audio data from the internal audio ring buffer
 *
 * This function is called internally by the streamer (passed as a callback
 * function) to consume and process data from the ring buffer.
 *
 * @param data Pointer to buffer to copy audio data into
 * @param size Size in bytes of the buffer to fill
 * @return Number of bytes successfully read.  If this is less than the
 *         'size' parameter, an underflow has occured.
 */
int STREAMER_Read(uint8_t *data, uint32_t size);

app_error_code_t play();
app_error_code_t pause();
app_error_code_t resume();
app_error_code_t volume();
app_error_code_t seek();
app_error_code_t stop();
void destroy();
void progress(int current, int total);

#if defined(__cplusplus)
}
#endif

#endif
