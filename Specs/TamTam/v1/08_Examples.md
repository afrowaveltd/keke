# TamTam Protocol – Examples (v1)

This document provides illustrative, non-normative examples of TamTam v1
packet usage and transport behavior.

These examples are intended to support understanding and implementation.
They do not define new rules and do not override normative specifications.

---

## Purpose

Examples demonstrate how TamTam concepts fit together in practice.

They exist to:

- clarify protocol behavior
- illustrate transport modes
- show capability interaction
- reduce ambiguity for implementers

If an example conflicts with a normative document, the normative document
takes precedence.

---

## Example 1: Standard Request / Response

A station sends a packet using standard transport mode.

Behavior:

- sender transmits a packet with standard mode declared
- receiver processes the packet
- receiver responds with a response packet
- response implicitly acknowledges receipt

Payload content is opaque and not interpreted by TamTam.

---

## Example 2: Stream Mode Telemetry

A station sends periodic telemetry data.

Behavior:

- packets are sent using stream mode
- no acknowledgment is expected
- packet loss is acceptable at the protocol level

TamTam does not guarantee delivery.

---

## Example 3: Capability Rejection

A packet declares a required capability.

Behavior:

- receiving station evaluates declared capabilities
- required capability is not supported
- packet is rejected
- a diagnostic or NACK may be generated

The payload is never inspected.

---

## Example 4: Emergency Mode Transmission

A packet is marked with emergency transport mode.

Behavior:

- packet is treated with highest priority
- lower-priority traffic may be delayed or preempted
- stricter handling rules may apply

Emergency mode indicates urgency, not authority or legitimacy.

---

## Example 5: Unknown Header Field

A packet contains an unknown header field introduced by an extension.

Behavior:

- implementation detects unknown field
- field is skipped using length information
- packet continues to be processed

Unknown fields do not cause failure solely by being unknown.

---

## Example 6: Mixed-Version Interaction

A TamTam v1 implementation communicates with a peer supporting extensions.

Behavior:

- v1 fields are processed normally
- unknown extension fields are ignored
- interoperability is preserved

No coordinated upgrade is required.

---

## Example 7: Diagnostic Without Failure

A packet is accepted but produces diagnostic information.

Behavior:

- packet is processed successfully
- diagnostic data is emitted
- no error or rejection occurs

Diagnostics provide observability, not failure indication.

---

## Summary

These examples illustrate typical TamTam v1 usage patterns.

They demonstrate how the protocol remains minimal, extensible, and
compatible while supporting diverse transport behaviors.

---

End of examples.
