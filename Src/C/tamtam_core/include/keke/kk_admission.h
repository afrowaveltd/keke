#pragma once
#include <stdint.h>
#include "kk_types.h"
#include "../tamtam/tt_types.h"

/* Admission is a dispatcher decision.
   Stations do not admit themselves. */

/* Admission outcome codes (minimal).
   Additive-only under never-breaking rules. */
typedef enum {
    KK_ADMISSION_ALLOW = 0,
    KK_ADMISSION_DENY  = 1,
    KK_ADMISSION_DEFER = 2
} kk_admission_outcome;

/* Optional reason codes for observability.
   Reason codes describe transport-level outcomes only. */
typedef enum {
    KK_REASON_NONE = 0,
    KK_REASON_POLICY_DENY,
    KK_REASON_CAPABILITY_MISMATCH,
    KK_REASON_UNSUPPORTED_MODE,
    KK_REASON_RESOURCE_LIMIT
} kk_admission_reason;

/* Admission decision produced by dispatcher. */
typedef struct {
    kk_admission_outcome outcome;
    kk_admission_reason  reason;

    /* Optional: correlate decision with a packet or flow.
       Zero may be used to mean "not provided". */
    tt_packet_id         packet_id;
    kk_flow_id           flow_id;
} kk_admission_decision;
