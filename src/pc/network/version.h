#ifndef VERSION_H
#define VERSION_H

#define SM64COOPDX_VERSION "v1.0.3"
#define D_CL_VER "v0.1"

// internal version
#define VERSION_TEXT "v"
#define VERSION_NUMBER 37
#define MINOR_VERSION_NUMBER 2

#if defined(VERSION_JP)
    #define VERSION_REGION "JP"
#elif defined(VERSION_EU)
    #define VERSION_REGION "EU"
#elif defined(VERSION_SH)
    #define VERSION_REGION "SH"
#else
    #define VERSION_REGION "US"
#endif

#ifdef DEVELOPMENT
    #define GAME_NAME "sm64coopdx-dev"
#elif !defined(VERSION_US)
    #define GAME_NAME "sm64coopdx-intl"
#else
    #define GAME_NAME "Dream Client " D_CL_VER
#endif

#define MAX_VERSION_LENGTH 32

const char* get_version(void);
const char* get_version_online(void);

#endif
