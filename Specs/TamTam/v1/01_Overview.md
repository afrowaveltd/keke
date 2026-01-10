# TamTam Protocol – Overview (v1)

This document provides a high-level overview of the TamTam transport
protocol, version 1.

TamTam is a low-level transport protocol designed to move anonymous
byte payloads across arbitrary media in a predictable, extensible,
and never-breaking manner.

This document is normative unless explicitly stated otherwise.

---

## Purpose

The purpose of TamTam is to provide a minimal, reliable, and extensible
transport mechanism that:

- carries opaque byte payloads
- operates over any physical or logical medium
- does not interpret payload content
- does not impose limits on payload semantics
- remains compatible over time

TamTam defines *how data moves*, not *what data means*.

---

## Design Goals

TamTam is designed to:

- be media-agnostic
- be implementation-neutral
- support multiple transport behaviors
- enable capability-based interoperability
- remain forward-compatible without breaking changes

TamTam intentionally avoids complexity that belongs to higher layers.

---

## Non-Goals

TamTam explicitly does NOT define or perform:

- payload interpretation
- application semantics
- encryption or compression
- authentication or authorization
- segmentation or reassembly strategies
- routing or policy decisions

These concerns are handled by higher layers within the Keke ecosystem
or by applications built on top of it.

---

## Transport Model

TamTam operates on discrete transport units called packets.

Each packet consists of:
- protocol-defined header fields
- an opaque payload

The protocol treats the payload as an uninterpreted sequence of bytes.

---

## Transport Modes

TamTam supports multiple transport modes, each defining how packets
are exchanged and acknowledged.

Examples include:
- standard (request / response)
- stream (no acknowledgment)
- group message
- emergency (absolute priority)
- full-duplex (turn-based)

Transport modes affect behavior, not payload meaning.

---

## Capabilities

TamTam uses capability signaling to describe what a station can handle.

Capabilities may include, but are not limited to:
- supported transport modes
- maximum packet sizes
- priority handling
- buffering constraints

Packets MAY be rejected if required capabilities are not satisfied.

---

## Stations and Identity

TamTam does not encode identity, intent, or trust semantics.

Stations are treated as transport participants without assumed meaning.
Any identity or trust model must be implemented above the TamTam layer.

---

## Error and Diagnostic Signaling

TamTam defines explicit mechanisms for error and diagnostic signaling.

These mechanisms are intended to:
- support debugging
- enable observability
- allow safe failure handling

Errors do not imply semantic failure of payload content.

---

## Compatibility Philosophy

TamTam follows a strict never-breaking rule.

Once defined:
- fields MUST NOT be removed
- semantics MUST NOT be invalidated
- extensions MUST be additive

Unknown fields MUST be safely ignored where possible.

Compatibility is treated as a core protocol feature.

---

## Versioning

TamTam protocol behavior is defined per version.

TamTam v1 is stable and immutable.
Future changes MUST be introduced as extensions or new versions.

Draft work and experiments are maintained in `vNext`.

---

## Relationship to Keke

TamTam provides the transport foundation for the Keke ecosystem.

Keke defines routing, policy, and authority.
TamTam provides the packet rhythm and transport mechanics.

TamTam does not make routing or policy decisions.

---

## Relationship to Afrowave

TamTam is governed by Afrowave principles.

If an implementation choice conflicts with Afrowave values or the
never-breaking rule, the protocol definition takes precedence over
convenience.

---

## Summary

TamTam is a minimal, disciplined transport protocol.

It is intentionally limited in scope, strictly layered, and designed
to survive long-term evolution without breaking compatibility.

---

End of TamTam overview.