# TamTam Protocol – Transport Modes (v1)

This document defines the transport modes supported by TamTam protocol
version 1.

Transport modes define packet exchange behavior and acknowledgment rules.
They do not define payload semantics.

This document is normative.

---

## Purpose of Transport Modes

Transport modes allow TamTam to support different communication patterns
without changing packet structure or payload meaning.

Transport modes affect:

- acknowledgment expectations
- packet flow behavior
- handling priority

Transport modes do NOT affect:

- payload interpretation
- routing decisions
- application semantics

---

## Mode Declaration

Each TamTam packet MUST declare exactly one transport mode.

The declared mode governs how the packet is handled by receiving stations
and how responses, if any, are generated.

---

## Standard Mode

Standard mode defines a request / response exchange pattern.

Characteristics:

- sender expects a response
- receiver MUST generate a response packet
- acknowledgment is implicit in the response

Standard mode is suitable for:

- queries
- commands
- transactional exchanges

Failure to respond MAY be reported as a diagnostic condition.

---

## Stream Mode

Stream mode defines a unidirectional, no-acknowledgment exchange pattern.

Characteristics:

- packets are sent without acknowledgment
- no response is expected
- packet loss is acceptable at the protocol level

Stream mode is suitable for:

- continuous data streams
- telemetry
- best-effort delivery

Stream mode does not imply reliability.

---

## Group Message Mode

Group message mode defines delivery to multiple recipients or a group
context.

Characteristics:

- delivery semantics are defined outside TamTam
- acknowledgment behavior is implementation- or policy-defined
- group membership is not defined by TamTam

TamTam ensures only that the packet is marked for group handling.

---

## Emergency Mode

Emergency mode defines transport with absolute priority.

Characteristics:

- highest possible priority
- MAY preempt or bypass non-emergency traffic
- handling rules are strictly enforced

Emergency mode is intended exclusively for situations involving:

- immediate risk to life
- immediate risk to safety
- critical infrastructure failure

Misuse of emergency mode MAY result in rejection or diagnostic signaling.

---

## Full-Duplex (Turn-Based) Mode

Full-duplex mode defines bidirectional exchange using explicit turn or
sequencing rules.

Characteristics:

- both sides may send packets
- turn or sequencing rules prevent collision
- physical simultaneous duplex is not assumed

Full-duplex mode supports interactive exchanges over constrained media.

---

## Acknowledgment Behavior

Acknowledgment behavior depends on transport mode:

- Standard mode: response packet acts as acknowledgment
- Stream mode: no acknowledgment
- Group message mode: acknowledgment behavior undefined at protocol level
- Emergency mode: acknowledgment rules MAY be stricter
- Full-duplex mode: acknowledgment defined by turn rules

Acknowledgments confirm transport handling only.

---

## Error Handling

Errors related to transport mode include:

- unsupported mode
- mode-capability mismatch
- invalid mode usage

Such errors MAY result in:

- negative acknowledgment (NACK)
- diagnostic signaling
- packet rejection

---

## Capability Interaction

Stations MAY declare support for a subset of transport modes.

If a station does not support a declared mode:

- it MAY reject the packet
- it MUST provide appropriate diagnostic information

---

## Compatibility Rules

Transport modes are governed by the never-breaking rule.

New modes MAY be added only as extensions.
Existing mode semantics MUST NOT change.

Unknown modes MUST be safely rejected or ignored according to policy.

---

## Summary

Transport modes define how packets are exchanged, not what they contain.

They allow TamTam to support diverse communication patterns while preserving
a minimal, extensible, and compatible core.

---

End of transport modes specification.
