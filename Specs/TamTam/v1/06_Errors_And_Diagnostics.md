# TamTam Protocol – Errors and Diagnostics (v1)

This document defines error handling and diagnostic signaling for
TamTam protocol version 1.

Errors and diagnostics operate strictly at the transport level.
They do not describe payload semantics.

This document is normative.

---

## Purpose

Errors and diagnostics provide controlled observability into transport-level
failures and conditions.

They exist to:

- support debugging and analysis
- enable predictable failure handling
- prevent silent interoperability issues

Errors and diagnostics MUST NOT:

- interpret payload content
- leak payload data
- define application semantics

---

## Error vs Diagnostic

### Error

An error indicates a violation of protocol rules or an inability to process
a packet according to declared requirements.

Errors are associated with:

- structural invalidity
- unsupported modes
- unmet capability requirements

Errors MAY result in packet rejection.

---

### Diagnostic

A diagnostic is informational.

Diagnostics describe:

- transport-level conditions
- handling outcomes
- protocol-visible state

Diagnostics do not imply failure.

---

## Error Conditions

TamTam v1 defines error conditions including, but not limited to:

- invalid packet structure
- missing mandatory fields
- unsupported transport mode
- capability requirement mismatch
- malformed header fields
- incompatible protocol version

Error conditions MUST be detectable without inspecting payload content.

---

## Error Signaling

Errors MAY be signaled using:

- negative acknowledgment (NACK)
- diagnostic-only packets
- error fields in response packets

Error signaling behavior MAY vary by transport mode.

---

## Negative Acknowledgment (NACK)

A NACK indicates that a packet was received but rejected.

A NACK MAY include:

- an error code
- diagnostic metadata

A NACK does not imply malicious intent or semantic failure.

---

## Diagnostic Fields

Diagnostic information MAY be carried in header fields.

Diagnostic fields:

- MUST be optional
- MUST be safely ignorable
- MUST NOT affect payload interpretation

Diagnostic fields MUST NOT expose payload data.

---

## Error Codes

Error codes, where used, MUST:

- be explicit
- be versioned
- be stable under the never-breaking rule

New error codes MAY be added as extensions.

Existing error codes MUST NOT change meaning.

---

## Mode-Specific Behavior

Error and diagnostic behavior MAY depend on transport mode.

Examples:

- standard mode MAY require explicit error responses
- stream mode MAY omit error signaling
- emergency mode MAY enforce stricter diagnostics

Mode-specific behavior MUST be documented.

---

## Capability-Related Errors

Errors related to capabilities include:

- missing required capability
- unsupported optional capability
- mode-capability mismatch

Such errors SHOULD produce diagnostic information.

---

## Observability Constraints

TamTam observability is intentionally limited.

Errors and diagnostics:

- describe transport behavior only
- avoid exposing internal implementation details
- avoid creating side channels

Observability must not compromise compatibility or safety.

---

## Compatibility Rules

Error and diagnostic mechanisms are governed by the never-breaking rule.

Extensions MUST:

- be additive
- remain ignorable by older implementations

Unknown diagnostic fields MUST NOT cause failure.

---

## Summary

Errors and diagnostics provide structured visibility into TamTam transport
behavior without compromising payload opacity or protocol stability.

They enable safe failure handling and long-term interoperability.

---

End of errors and diagnostics specification.
