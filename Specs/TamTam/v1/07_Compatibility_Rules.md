# TamTam Protocol – Compatibility Rules (v1)

This document defines the compatibility and evolution rules governing
TamTam protocol version 1.

These rules are normative and apply to all TamTam v1 implementations,
extensions, and documentation.

---

## Purpose

Compatibility rules ensure that TamTam v1 remains interoperable across
time, implementations, and environments.

They exist to:

- prevent breaking changes
- enable long-term evolution
- support mixed-version ecosystems
- preserve protocol trust

Compatibility is treated as a core protocol feature.

---

## Never-Breaking Rule

TamTam v1 is governed by a strict never-breaking rule.

Once defined:

- fields MUST NOT be removed
- field meanings MUST NOT change
- valid values MUST NOT be invalidated
- semantics MUST NOT be reinterpreted

Breaking changes are forbidden within TamTam v1.

---

## Additive Evolution Only

All evolution within TamTam v1 MUST be additive.

Additive changes include:

- introducing new optional fields
- adding new valid values to extensible fields
- defining new transport modes
- defining new capability types
- defining new error or diagnostic codes

Additive changes MUST NOT alter existing behavior.

---

## Unknown Elements Handling

Implementations MUST tolerate unknown elements.

Unknown elements include:

- unknown header fields
- unknown capability identifiers
- unknown diagnostic fields
- unknown error codes
- unknown transport modes

Rules:

- unknown elements MUST NOT cause failure solely by being unknown
- unknown elements MUST be safely ignored or rejected according to policy
- parsing MUST remain safe and deterministic

---

## Forward Compatibility

TamTam v1 implementations SHOULD be forward-compatible.

Forward compatibility requires:

- safe skipping of unknown fields
- reliance on explicit length or identifiers
- avoidance of fixed offsets where extensibility exists

Implementations MUST NOT assume complete knowledge of all fields.

---

## Backward Compatibility

Backward compatibility is mandatory.

New implementations MUST correctly interoperate with existing TamTam v1
packets and peers.

Existing packets MUST remain valid indefinitely.

---

## Version Identification

Each TamTam packet MUST indicate the governing protocol version.

Version identifiers:

- MUST be explicit
- MUST be immutable
- MUST NOT be overloaded

TamTam v1 version semantics MUST remain stable.

---

## Extension Governance

Extensions to TamTam v1:

- MUST be documented
- MUST follow additive rules
- MUST NOT create hidden dependencies
- MUST NOT require coordinated upgrades

Extensions MAY be ignored by implementations that do not support them.

---

## Mixed-Version Environments

Mixed-version environments are expected.

Rules:

- v1 implementations MUST interoperate safely with other v1 implementations
- v1 implementations MUST safely handle vNext elements where possible
- downgrade or fallback behavior MUST be predictable

Mixed-version operation MUST NOT result in undefined behavior.

---

## Implementation Freedom

Compatibility rules define observable behavior only.

Implementations are free to:

- choose internal data structures
- choose parsing strategies
- optimize performance

Implementation freedom MUST NOT violate protocol semantics.

---

## Deprecation Policy

TamTam v1 does not support removal or deprecation of defined elements.

Elements may become less commonly used but MUST remain valid.

Deprecation MAY be documented but MUST NOT affect interoperability.

---

## Relationship to Higher Layers

Compatibility rules apply strictly to TamTam.

Higher layers MAY define their own evolution rules but MUST NOT
invalidate TamTam compatibility guarantees.

---

## Summary

TamTam v1 is a stable, immutable transport protocol.

Its evolution is governed by strict additive rules that preserve
interoperability, safety, and long-term trust.

Compatibility is not optional. It is the protocol.

---

End of compatibility rules.
