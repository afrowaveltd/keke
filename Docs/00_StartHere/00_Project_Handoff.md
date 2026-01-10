# Project Handoff

This document is the authoritative entry point into the Afrowave / Keke /
TamTam project.

It defines the conceptual structure, guiding principles, and boundaries of
the system. All subsequent documentation, specifications, and implementations
are expected to conform to the definitions stated here.

---

## Conceptual Overview

This project defines a universal transport system built on a transportation
metaphor.

The system is structured into three conceptual layers:

- Afrowave
- Keke
- TamTam

Each layer has a distinct role and authority.

---

## Afrowave

Afrowave is the philosophical, ethical, cultural, and longevity framework of
the project.

Afrowave defines:

- core values
- ethical boundaries
- naming and language rules
- long-term compatibility principles

Afrowave does NOT define:

- protocol mechanics
- routing algorithms
- implementation details

Afrowave principles override implementation convenience.

---

## Keke

Keke is a civil transport ecosystem.

It represents the organizational layer above the protocol and defines how
transport is:

- routed
- prioritized
- governed
- controlled

Keke is inspired by accessible, resilient urban transport systems, with an
emphasis on inclusivity, availability, and adaptability.

---

## TamTam

TamTam is the low-level transport protocol.

It defines:

- packet structure
- transport modes
- capability signaling
- compatibility guarantees

TamTam is designed to transport any data over any medium, including but not
limited to:

- network links
- serial connections
- audio channels
- removable media
- physical transfer (sneakernet)

TamTam does not interpret payload content.

---

## Core Principles

The following principles apply to the entire system:

- Payload is always anonymous byte cargo.
- Payload size must never limit payload type.
- Segmentation and reassembly belong to higher layers.
- The protocol follows a strict never-breaking compatibility rule.
- Multiple transport modes exist (standard, stream, group, emergency,
  full-duplex).
- Stations declare capabilities; incompatible packets may be rejected.
- The dispatcher is the sole authority for routing and policy.
- Architecture is strictly layered and designed bottom-up.

---

## Architecture Philosophy

The system is designed from the lowest layer upward.

No layer may assume semantics defined by a higher layer.
No higher layer may violate constraints defined by a lower layer.

This separation is intentional and enforced.

---

## Language and Documentation Rules

All technical documentation, specifications, APIs, and source code comments
are written in:

- English
- ASCII only

This is a practical interoperability decision, not a cultural preference.

Subsystem names may be culturally expressive.

---

## Documentation vs Specification

This project distinguishes between:

- Documentation (Docs)
- Specifications (Specs)

Specifications are normative and authoritative.
Documentation is explanatory and non-normative.

Specifications are versioned and governed by the never-breaking rule.

---

## Implementation Policy

Documentation and specifications take precedence over implementation.

A minimal core implementation exists only as a reality check and does not
define behavior.

---

## Current Phase

The project is currently in an early design and specification phase.

Primary focus areas:

- repository structure
- glossary
- naming rules
- initial protocol and ecosystem specifications

Advanced infrastructure, enforcement, and media mechanisms are intentionally
out of scope at this stage.

---

## Scope Discipline

Features or systems not required for the current phase must not be
implemented prematurely.

Design decisions may be recorded, but execution is deferred until justified.

---

End of handoff document.
