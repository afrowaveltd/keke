# Glossary

This glossary defines canonical terms used across the Afrowave / Keke / TamTam
project. The definitions in this document are authoritative.

All terms are defined in English and ASCII for interoperability reasons.

---

## Afrowave

A philosophical, ethical, cultural, and longevity framework governing the
entire project.

Afrowave defines values, boundaries, naming principles, and long-term
compatibility rules. It does not define protocol mechanics.

---

## Keke

A civil transport ecosystem layer.

Keke defines how transport is organized, routed, prioritized, and governed
above the protocol layer. It includes dispatcher authority, routing policy,
and station roles.

---

## TamTam

A low-level transport protocol.

TamTam defines packet structure, transport modes, and capability signaling.
It transports anonymous byte payloads without interpreting their content.

---

## Payload

An opaque sequence of bytes transported by the protocol.

Payload content is never interpreted, inspected, or modified by TamTam.
Any semantic meaning is defined exclusively by higher layers.

---

## Packet

A structured transport unit defined by the TamTam protocol.

A packet consists of protocol-defined fields and an opaque payload.
Packet structure is versioned and governed by the never-breaking rule.

---

## Transport Mode

A defined behavioral pattern for packet exchange.

Examples include standard (request/response), stream (no acknowledgment),
group message, emergency, and full-duplex (turn-based).

---

## Station

An endpoint participating in the transport ecosystem.

A station may send, receive, forward, or process packets according to its
declared capabilities and the rules enforced by the dispatcher.

Stations do not define global policy.

---

## Dispatcher

The authoritative control entity within the Keke ecosystem.

The dispatcher governs routing, policy enforcement, diagnostics, and
debugging. All policy decisions originate from the dispatcher, not from
individual stations.

---

## Capability

A declared feature or constraint of a station.

Capabilities describe what a station can handle (e.g. modes, sizes,
priorities). Packets may be rejected if required capabilities are not met.

---

## Capability Negotiation

The process by which stations advertise and evaluate capabilities.

Capability negotiation determines whether a packet or transport mode is
acceptable for a given station.

---

## Routing

The process of determining how packets are forwarded through the ecosystem.

Routing decisions are governed by the dispatcher and may consider policy,
capabilities, and priority.

---

## Priority

A relative importance level assigned to packets or transport flows.

Higher priority traffic may preempt or bypass lower priority traffic
according to dispatcher rules.

---

## Emergency Mode

A transport mode with absolute priority.

Emergency traffic is intended for situations involving immediate risk to
life, safety, or critical infrastructure.

---

## Anonymous Transport

A transport property where the protocol does not encode or infer identity,
meaning, or intent from payload data.

Identity, if required, must be handled by higher layers.

---

## Never-Breaking Rule

A compatibility rule stating that once a protocol element is defined, it must
never be removed or invalidated.

Extensions must be additive and forward-compatible.

---

## Version

A labeled, immutable definition of protocol or ecosystem behavior.

Versions define compatibility boundaries. Stable versions must not be broken.

---

## Sealed Record

A data record that exists but is completely inaccessible until explicitly
unsealed.

A sealed record has no read, write, or observe capability in any mode.

---

## Unsealing

A one-time, irreversible transition from sealed to accessible state.

Unsealing reveals content according to defined rules and permanently ends
the sealed state.

---

## Specification (Spec)

A normative document defining required behavior, structure, or rules.

Specifications are versioned and authoritative.

---

## Documentation (Docs)

Non-normative explanatory material.

Documentation aids understanding but does not override specifications.

---

## Core Implementation

A minimal reference implementation used as a reality check.

Core implementations validate specifications but do not define them.

---

## Ecosystem

The complete set of interacting components governed by Afrowave principles,
Keke rules, and TamTam protocol definitions.

---

End of glossary.
