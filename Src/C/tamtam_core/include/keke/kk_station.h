#pragma once
#include "kk_types.h"

/* A station is a transport participant.
   Stations declare capabilities and follow dispatcher authority. */
typedef struct {
    kk_station_id id;

    /* Simple capability representation for the minimal core.
       The mapping between this mask and TamTam capabilities is defined
       at higher layers. */
    uint32_t      capability_mask;
} kk_station;
