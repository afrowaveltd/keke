#pragma once
#include "tt_types.h"

/* A capability is a declared transport-level feature or constraint.

   Capabilities are evaluated by higher layers (e.g., Keke dispatcher).
   Capabilities do not define payload meaning. */
typedef struct {
    tt_capability_id id;

    /* Bit flags or small properties, implementation-defined.
       The meaning of flags is outside the tamtam_core contract. */
    uint32_t         flags;
} tt_capability;
