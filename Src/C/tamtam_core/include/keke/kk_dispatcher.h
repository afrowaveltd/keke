#pragma once
#include "kk_types.h"

/* The dispatcher is the authoritative control entity in Keke.
   This minimal core defines identity only, not behavior.

   Routing, policy enforcement, scheduling, and diagnostics are out of scope
   for tamtam_core and belong to higher-layer implementations. */
typedef struct {
    uint32_t dispatcher_id;
} kk_dispatcher;
