#pragma once
#include "tt_types.h"

/* Transport modes are declared per packet.
   Exact numeric values are intentionally not fixed here. */
typedef uint8_t tt_transport_mode;

/* TamTam v1 packet header (conceptual core).
   Payload is opaque and not represented here.

   NOTE:
   - This is NOT a binary wire layout.
   - Serialization and I/O are explicitly out of scope for tamtam_core. */
typedef struct {
    tt_packet_id       packet_id;

    /* Governing protocol version for this packet. */
    uint8_t            version_major;
    uint8_t            version_minor;

    /* Declared transport mode for exchange behavior. */
    tt_transport_mode  transport_mode;

    /* Payload length in bytes (payload itself remains opaque). */
    uint32_t           payload_length;
} tt_packet_header;
