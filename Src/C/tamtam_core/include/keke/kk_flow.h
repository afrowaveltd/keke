#pragma once
#include "kk_types.h"

/* A transport flow is a logical grouping of related packets coordinated
   over time by the dispatcher. */
typedef struct {
    kk_flow_id  id;
    kk_priority priority;
} kk_flow;
