#pragma once
#include <stdint.h>

/* Keke identifiers are ecosystem-level only. */
typedef uint32_t kk_station_id;
typedef uint32_t kk_flow_id;

/* Priority is transport urgency, not payload meaning.
   Exact numeric representation is implementation-defined. */
typedef uint8_t  kk_priority;
