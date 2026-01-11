#pragma once
#include <stdint.h>

/* Policy is an explicit, authoritative rule set.
   This minimal core defines an identifier only. */
typedef struct {
    uint32_t policy_id;
} kk_policy;
