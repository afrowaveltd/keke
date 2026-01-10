# TamTam Protocol – Capabilities (v1)

This document defines the capability model used by TamTam protocol
version 1.

Capabilities describe what a station can handle at the transport level.
They enable safe interoperability without payload interpretation.

This document is normative.

---

## Purpose of Capabilities

Capabilities allow stations to declare transport-level constraints and
features so that incompatible packets can be safely rejected.

Capabilities exist to:

- prevent undefined behavior
- support heterogeneous implementations
- enable forward compatibility

Capabilities do NOT:

- define payload semantics
- establish trust or identity
- override dispatcher policy

---

## Capability Declaration

A station MAY declare one or more capabilities.

Capability declaration describes:

- supported transport modes
- size limits
- priority handling
- buffering or timing constraints

Capability declaration MAY be static or dynamic, depending on
implementation and policy.

---

## Capability Scope

Capabilities apply at the TamTam transport layer only.

Capabilities:

- do not imply application behavior
- do not define routing decisions
- do not imply authorization

Higher layers MAY define additional capability concepts.

---

## Capability Requirements

Packets MAY specify capability requirements.

A capability requirement indicates conditions that MUST be satisfied
for the packet to be accepted.

If required capabilities are not met:

- the packet MAY be rejected
- a diagnostic SHOULD be generated

---

## Capability Matching

Capability matching is the process of evaluating whether a station’s
declared capabilities satisfy packet requirements.

Matching rules:

- requirements MUST be explicit
- absence of a required capability implies incompatibility
- unknown capability requirements MAY result in rejection

Capability matching is deterministic and transport-level only.

---

## Unsupported Capabilities

If a station encounters a capability requirement it does not support:

- it MUST NOT attempt partial handling
- it MAY reject the packet
- it SHOULD emit diagnostic information

Stations MUST NOT misrepresent capability support.

---

## Optional Capabilities

Capabilities MAY be optional.

Optional capabilities:

- enhance behavior
- improve performance
- add resilience

Packets MUST NOT require optional capabilities unless explicitly stated.

---

## Capability Evolution

Capabilities are subject to the never-breaking rule.

Once defined:

- capability meaning MUST NOT change
- removal is forbidden
- extension MUST be additive

New capabilities MAY be introduced as extensions.

---

## Capability and Compatibility

Capabilities support compatibility by:

- allowing graceful rejection
- avoiding undefined behavior
- enabling mixed-version environments

Unknown capabilities MUST NOT cause protocol failure.

---

## Diagnostic Interaction

Capability-related failures SHOULD produce diagnostic signals.

Diagnostics MAY include:

- unsupported capability
- missing requirement
- mode-capability mismatch

Diagnostics MUST NOT reveal payload content.

---

## Relationship to Transport Modes

Transport modes MAY require specific capabilities.

If a station supports a transport mode, it SHOULD declare the
corresponding capability.

Transport mode support does not imply support for all optional features
of that mode.

---

## Summary

Capabilities provide a declarative mechanism for expressing transport-level
support and constraints.

They enable safe interoperability, forward compatibility, and predictable
behavior across diverse implementations.

---

End of capabilities specification.
