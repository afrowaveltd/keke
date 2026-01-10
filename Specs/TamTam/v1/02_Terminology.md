# TamTam Protocol – Terminology (v1)

This document defines TamTam-specific terminology used throughout the TamTam
v1 specification set.

These definitions are normative and override local wording in other
documents.

---

## Packet

A discrete TamTam transport unit consisting of protocol-defined header
fields and an opaque payload.

---

## Header

The protocol-defined portion of a packet containing structured fields used
to control transport behavior.

Header fields are interpreted by the protocol. Payload is not.

---

## Payload

An opaque sequence of bytes carried by a packet.

TamTam does not interpret payload content.

---

## Field

A named element of the TamTam header.

Fields are versioned and governed by the never-breaking rule.

---

## Extension

An additive protocol change that introduces new fields or new valid values
without breaking existing behavior.

Extensions MUST NOT invalidate v1 semantics.

---

## Unknown Field

A header field not recognized by an implementation.

Unknown fields MUST be safely ignored where possible.

---

## Station

A transport participant that can send, receive, and possibly forward TamTam
packets.

Stations declare capabilities and may reject packets that exceed them.

---

## Capability

A declared feature or constraint of a station relevant to TamTam transport
behavior.

Capabilities may include supported modes, maximum sizes, and priority rules.

---

## Capability Requirement

A condition that must be satisfied for a packet or mode to be accepted by a
station.

If requirements are not met, the packet MAY be rejected.

---

## Transport Mode

A defined packet exchange behavior.

Transport mode determines acknowledgment rules and flow behavior but does not
define payload meaning.

---

## Standard Mode

A transport mode in which the sender expects an explicit response.

---

## Stream Mode

A transport mode in which packets are sent without acknowledgment.

---

## Group Message

A transport mode intended for delivery to multiple recipients or a defined
group context.

Group membership semantics are defined outside TamTam.

---

## Emergency Mode

A transport mode with absolute priority.

Emergency handling rules are defined by the protocol and/or higher-layer
policy, but emergency mode indicates the highest transport urgency.

---

## Full-Duplex (Turn-Based)

A transport behavior where bidirectional exchange is supported using defined
turn or sequencing rules.

TamTam does not assume simultaneous physical duplex capability.

---

## Acknowledgment (ACK)

A protocol-level confirmation that a packet was received and accepted under
the rules of the current mode.

ACK does not imply payload semantics were correct.

---

## Negative Acknowledgment (NACK)

A protocol-level signal that a packet was rejected or could not be processed.

NACK includes or references an error reason.

---

## Response

A packet sent in reply to another packet under standard mode rules.

A response may contain payload and/or diagnostic information.

---

## Priority

A relative importance indicator affecting scheduling and handling.

Priority meaning is transport-level only and does not define payload meaning.

---

## Diagnostic

Protocol-level information intended to support observability, debugging, or
failure analysis.

Diagnostics must not reveal payload content.

---

## Error

A protocol-level condition indicating invalid structure, unsupported
requirements, or failure to process a packet according to protocol rules.

---

## Compatibility

The property that different implementations can interoperate safely.

Compatibility is enforced by strict versioning and the never-breaking rule.

---

## Never-Breaking Rule

Once defined:

- fields MUST NOT be removed
- semantics MUST NOT be invalidated
- extensions MUST be additive

---

## Version

A labeled, immutable definition of TamTam behavior.

TamTam v1 is stable; future changes must be additive or defined in new
versions.

---

End of TamTam terminology.
