#pragma once
#include "tt_types.h"
#include "tt_capability.h"

/* TamTam handshake skeleton (Stage 0).
   This file defines transport-level structures used to describe:

   - what a station declares it can handle (capabilities)
   - what a packet requires (capability requirements)

   NOTE:
   - This is NOT network handshake logic.
   - No I/O, no serialization, no routing here.
*/

/* A compact list view over capabilities.
   We use pointer + count instead of fixed-size arrays to keep the core
   dependency-free and allocation-free. */
typedef struct {
    const tt_capability* items; /* pointer to first element */
    uint32_t             count; /* number of elements */
} tt_capability_list;

/* Capability requirements for a packet.
   In v1, requirements are modeled as a list of capability identifiers.
   Higher layers decide matching rules and policy constraints. */
typedef struct {
    const tt_capability_id* required_ids;
    uint32_t                required_count;
} tt_capability_requirements;
