#pragma once
#include <stdint.h>

/* Priority levels are ordered but not interpreted semantically.
   Higher numeric value means higher urgency. */
typedef enum {
    KK_PRIORITY_NORMAL    = 0,
    KK_PRIORITY_ELEVATED  = 1,
    KK_PRIORITY_EMERGENCY = 2
} kk_priority_level;
