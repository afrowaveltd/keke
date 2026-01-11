#pragma once
#include <stdint.h>

/* Transport modes define exchange behavior.
   Numeric values are explicit to preserve compatibility. */
typedef enum {
    TT_MODE_STANDARD   = 0, /* request / response */
    TT_MODE_STREAM     = 1, /* no acknowledgment expected */
    TT_MODE_GROUP      = 2, /* group or broadcast semantics */
    TT_MODE_EMERGENCY  = 3, /* highest priority transport */
    TT_MODE_FULLDUPLEX = 4  /* turn-based bidirectional exchange */
} tt_transport_mode;
