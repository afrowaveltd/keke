# Keke Ecosystem – Overview (v1)

This document provides a high-level overview of the Keke ecosystem,
version 1.

Keke defines the civil transport layer built on top of the TamTam
protocol. It governs routing, policy, priority handling, and authority
without interpreting payload content.

This document is normative.

---

## Purpose

The purpose of Keke is to organize, govern, and operate transport at
scale using TamTam as the underlying protocol.

Keke exists to:

- coordinate stations
- enforce transport policy
- manage routing and priority
- provide diagnostics and observability
- ensure predictable, civil behavior

Keke defines *how transport is governed*, not *how packets are encoded*.

---

## Relationship to TamTam

Keke operates above TamTam.

TamTam:

- defines packet structure and transport mechanics
- transports opaque byte payloads
- enforces never-breaking compatibility

Keke:

- makes routing and policy decisions
- evaluates capabilities and priorities
- coordinates stations and transport flows

Keke MUST NOT violate TamTam protocol guarantees.

---

## Civil Transport Model

Keke is designed as a civil transport ecosystem.

This means:

- accessibility over exclusivity
- predictability over optimization
- policy over ad-hoc behavior
- authority over peer anarchy

The model is inspired by resilient, accessible transport systems.

---

## Core Concepts

Keke introduces the following core concepts:

- Station
- Dispatcher
- Route
- Policy
- Priority
- Flow

Each concept has a defined role and authority.

---

## Station

A station is an endpoint participating in the Keke ecosystem.

Stations:

- send and receive TamTam packets
- declare capabilities
- comply with dispatcher decisions
- do not define global policy

Stations may be simple or complex, local or remote.

---

## Dispatcher

The dispatcher is the authoritative control entity in Keke.

The dispatcher:

- governs routing decisions
- enforces policy
- manages priority
- coordinates diagnostics and debugging

The dispatcher is a logical authority.
Its implementation may be centralized or distributed.

Stations MUST defer to dispatcher decisions.

---

## Routing

Routing determines how packets move between stations.

Routing decisions:

- are made by the dispatcher
- may consider capabilities, policy, and priority
- do not interpret payload content

Routing is deterministic and policy-driven.

---

## Policy

Policy defines rules governing transport behavior.

Policy may include:

- access rules
- priority constraints
- rate limits
- emergency handling rules

Policy is enforced by the dispatcher.

Stations MUST NOT override policy.

---

## Priority Handling

Priority affects scheduling and handling of transport flows.

Keke defines:

- how priority is evaluated
- how conflicts are resolved
- how emergency traffic is treated

Priority is transport-level only.

---

## Transport Flows

A transport flow is a logical sequence of packets related by context.

Flows:

- may be short-lived or long-running
- may span multiple stations
- are coordinated by the dispatcher

Flows do not imply payload semantics.

---

## Diagnostics and Observability

Keke provides observability at the ecosystem level.

Diagnostics may include:

- routing decisions
- policy enforcement outcomes
- station capability mismatches
- flow-level events

Diagnostics do not expose payload content.

---

## Authority Model

Keke follows a strict authority model.

Rules:

- the dispatcher is authoritative
- stations are participants, not decision-makers
- policy is explicit and enforced
- ambiguity is avoided

Authority is required for predictable operation.

---

## Scope Discipline

Keke v1 does NOT define:

- packet formats
- encryption or authentication
- application semantics
- user identity models

These concerns belong to other layers.

---

## Compatibility Philosophy

Keke v1 follows a never-breaking compatibility philosophy.

Once defined:

- concepts MUST NOT change meaning
- rules MUST NOT be invalidated
- extensions MUST be additive

Compatibility applies at the ecosystem level.

---

## Summary

Keke is a civil transport ecosystem built on TamTam.

It provides authority, policy, and coordination while preserving payload
opacity and protocol stability.

Keke defines order without imposing meaning.

---

End of Keke overview.
