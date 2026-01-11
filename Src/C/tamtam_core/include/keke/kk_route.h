#pragma once
#include "kk_types.h"

/* Route is a dispatcher-selected path.
   This minimal core models a route as a list view over station ids. */

typedef struct {
    const kk_station_id* hops;   /* ordered list of stations */
    uint32_t             hop_count;
} kk_route;
