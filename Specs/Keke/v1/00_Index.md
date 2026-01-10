# Keke Transport Ecosystem – v1 Index

This document is the normative entry point for the Keke transport ecosystem specification, version 1.

Keke defines how transport is organized, routed, prioritized, and governed above the TamTam protocol layer.

## Scope of v1

Keke v1 defines:

- the dispatcher authority model
- routing and forwarding responsibilities
- priority and emergency handling
- capability-based admission control
- station roles and responsibilities

Keke v1 does NOT define:

- low-level packet encoding
- physical or link-layer transport
- application semantics

## Documents in this specification

The following documents together form Keke v1:

1. Overview
2. Dispatcher Authority
3. Routing Policy
4. Priority and Emergency Handling
5. Station Roles and Capabilities

All documents listed above are normative unless explicitly stated otherwise.

## Authority model

In Keke:

- the dispatcher is the sole policy authority
- stations do not define global policy
- stations may accept or reject packets based on declared capabilities

## Status

Keke v1 is stable and designed to operate with TamTam v1.

Future extensions are developed in `vNext` without breaking v1 behavior.
