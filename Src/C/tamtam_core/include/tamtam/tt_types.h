#pragma once
#include <stdint.h>
#include <stddef.h>

/* Core byte type used for opaque payload transport. */
typedef uint8_t tt_byte;

/* Capability identifiers are transport-level only. */
typedef uint32_t tt_capability_id;

/* Packet identifiers are transport-level correlation aids.
   They do not imply payload semantics. */
typedef uint32_t tt_packet_id;
