#pragma once
#include "kk_admission.h"
#include "kk_route.h"

/* Dispatcher decision bundle.
   Represents the result of evaluating a packet or flow. */
typedef struct {
    kk_admission_decision admission;

    /* Route is only valid if admission.outcome == ALLOW */
    const kk_route* route;
} kk_dispatcher_decision;
