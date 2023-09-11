// Copyright 2019 Joe Drago. All rights reserved.
// SPDX-License-Identifier: BSD-2-Clause

#ifndef LIBAVIF_APPS_SHARED_AVIFJPEG_H
#define LIBAVIF_APPS_SHARED_AVIFJPEG_H

#include "avif/avif.h"

#ifdef __cplusplus
extern "C" {
#endif

// Decodes the jpeg file at path 'inputFilename' into 'avif'.
// 'ignoreGainMap' is only relevant for jpeg files that have a gain map
// and only if AVIF_ENABLE_EXPERIMENTAL_JPEG_GAIN_MAP_CONVERSION is ON
// (requires AVIF_ENABLE_EXPERIMENTAL_GAIN_MAP and libxml2). Otherwise
// it has no effect.
avifBool avifJPEGRead(const char * inputFilename,
                      avifImage * avif,
                      avifPixelFormat requestedFormat,
                      uint32_t requestedDepth,
                      avifChromaDownsampling chromaDownsampling,
                      avifBool ignoreColorProfile,
                      avifBool ignoreExif,
                      avifBool ignoreXMP,
                      avifBool ignoreGainMap);
avifBool avifJPEGWrite(const char * outputFilename, const avifImage * avif, int jpegQuality, avifChromaUpsampling chromaUpsampling);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // ifndef LIBAVIF_APPS_SHARED_AVIFJPEG_H
