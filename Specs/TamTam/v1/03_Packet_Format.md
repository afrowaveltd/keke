# TamTam Protocol – Packet Format (v1)

This document defines the TamTam v1 packet format.

It specifies the conceptual structure of a packet, the roles of header
fields, and the rules governing extensibility and compatibility.

This document is normative.

---

## Packet Structure

A TamTam packet consists of two conceptual parts:

1. Header
2. Payload

The header contains protocol-defined fields interpreted by TamTam.
The payload is an opaque sequence of bytes not interpreted by TamTam.

---

## Header Overview

The TamTam header is a structured collection of fields that control transport
behavior.

Header fields MAY include, but are not limited to:

- version identification
- transport mode indication
- capability requirements
- priority signaling
- packet identification
- diagnostic or error indicators
- extension containers

The exact encoding of header fields is defined by this specification and
future extensions, subject to the never-breaking rule.

---

## Mandatory Header Fields

TamTam v1 packets MUST include the following logical fields:

- Protocol Version
  Identifies the TamTam protocol version governing this packet.

- Transport Mode
  Indicates the transport mode under which the packet is exchanged.

- Packet Identifier
  Uniquely identifies the packet within a defined context.

- Header Length
  Indicates the total length of the header, allowing safe parsing and
  extension skipping.

These fields are mandatory for all TamTam v1 packets.

---

## Optional Header Fields

TamTam v1 allows optional header fields to support extended behavior.

Optional fields MAY include:

- capability requirements
- priority indicators
- acknowledgment references
- diagnostic data
- extension-specific metadata

Optional fields MUST be skippable based on header length information.

---

## Field Ordering

Header fields are ordered logically but MUST be parsed based on explicit
length or identifier information rather than fixed positions.

Implementations MUST NOT assume fixed offsets beyond the minimal mandatory
fields required for safe parsing.

---

## Payload

The payload is an opaque byte sequence.

TamTam:

- does not interpret payload content
- does not inspect payload structure
- does not impose semantic meaning on payload bytes

Payload interpretation is the exclusive responsibility of higher layers.

---

## Extensibility Model

TamTam v1 supports extensibility through additive header fields.

Rules for extensions:

- extensions MUST NOT alter existing field semantics
- extensions MUST be safely ignorable by implementations that do not
  recognize them
- extensions MUST be self-describing or length-delimited

Unknown fields MUST NOT cause packet rejection solely due to being unknown.

---

## Unknown Fields

If an implementation encounters an unknown header field:

- it MUST skip the field using provided length information
- it MUST continue parsing remaining known fields
- it MUST NOT assume semantic meaning for the unknown field

Unknown fields MUST NOT break interoperability.

---

## Header Length and Safe Parsing

The header MUST include sufficient information to determine:

- where the header ends
- where the payload begins

This requirement ensures:

- forward compatibility
- safe skipping of extensions
- resilience to partial understanding

---

## Packet Identification

Packet identifiers are used to:

- correlate responses
- support acknowledgments
- enable diagnostics and tracing

The format and scope of packet identifiers are defined by this specification
but do not imply payload semantics or identity.

---

## Diagnostic and Error Fields

Header fields MAY carry diagnostic or error information.

Such fields:

- describe protocol-level conditions
- do not describe payload semantics
- must not leak payload content

Diagnostics are intended for observability and debugging.

---

## Structural Validation

A TamTam v1 packet is considered structurally valid if:

- mandatory fields are present
- header length is consistent
- fields are well-formed according to this specification

Structural validity does not imply payload correctness.

---

## Never-Breaking Rule Application

Once a header field or structure is defined:

- it MUST NOT be removed
- it MUST NOT change meaning
- it MAY be extended only in an additive way

This rule applies to all packet format elements.

---

## Summary

The TamTam v1 packet format defines a minimal, extensible structure that
supports long-term compatibility and diverse transport behaviors.

It separates transport control from payload meaning and enforces safe,
forward-compatible parsing.

---

End of packet format specification.
