/*
 * $Id: coreaudio.h 700 2009-02-23 02:21:42Z x $
 *
 */

#ifndef DESPOTIFY_COREAUDIO_H
#define DESPOTIFY_COREAUDIO_H

#include "audio.h"


int coreaudio_init_device(void *);
int coreaudio_free_device(void *);
int coreaudio_prepare_device(AUDIOCTX *);
int coreaudio_play(AUDIOCTX *);
int coreaudio_stop(AUDIOCTX *);


/* Need to be exposed to audio.c, declared in coreaudio.c */
extern AUDIODRIVER *driver;
#endif
