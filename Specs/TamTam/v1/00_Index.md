# TamTam Protocol – v1 Index

This document is the normative entry point for TamTam protocol version 1.

TamTam is a low-level transport protocol designed to carry anonymous byte payloads over arbitrary media.

## Scope of v1

TamTam v1 defines:

- packet structure
- transport modes
- capability negotiation
- error and diagnostic signaling
- compatibility guarantees

TamTam v1 does NOT define:

- payload interpretation
- segmentation or reassembly strategies
- encryption or compression
- application-level semantics

## Documents in this specification

The following documents together form TamTam v1:

1. Overview
2. Terminology
3. Packet Format
4. Transport Modes
5. Capabilities
6. Errors and Diagnostics
7. Compatibility Rules

All documents listed above are normative unless explicitly stated otherwise.

## Compatibility rule

TamTam v1 is governed by the never-breaking rule:

- once defined, fields and semantics MUST NOT be removed
- extensions MUST be additive
- unknown fields MUST be safely ignored where possible

## Status

TamTam v1 is intended to be stable and forward-compatible.

Drafts and future changes are discussed exclusively in `vNext`.
