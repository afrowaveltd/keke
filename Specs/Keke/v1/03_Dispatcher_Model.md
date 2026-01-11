# Keke Ecosystem – Dispatcher Model (v1)

This document defines the dispatcher model used by the Keke ecosystem,
version 1.

The dispatcher is the authoritative control entity responsible for routing,
policy enforcement, priority handling, and ecosystem-level coordination.

This document is normative.

---

## Purpose of the Dispatcher

The dispatcher exists to ensure predictable, policy-driven operation of the
Keke ecosystem.

The dispatcher:

- makes routing decisions
- enforces policy
- manages priorities
- coordinates transport flows
- provides ecosystem-level diagnostics

The dispatcher does not interpret payload content.

---

## Authority Model

Keke follows a strict authority model.

Rules:

- the dispatcher is authoritative
- stations are participants
- policy is enforced, not negotiated
- ambiguity is avoided

Stations MUST defer to dispatcher decisions.

---

## Dispatcher Responsibilities

The dispatcher is responsible for:

- routing decisions
- admission control
- priority evaluation
- flow coordination
- policy enforcement
- diagnostics and observability

The dispatcher MUST NOT:

- interpret payload content
- define application semantics
- bypass TamTam protocol rules

---

## Routing Decisions

Routing decisions determine how packets and flows move through the
ecosystem.

Routing decisions:

- are made exclusively by the dispatcher
- consider policy, priority, and capabilities
- may change dynamically

Stations MUST follow routing instructions.

---

## Admission Control

Admission control determines whether a packet or flow is allowed to enter
or continue through the ecosystem.

Admission decisions may be based on:

- policy rules
- capability compatibility
- priority constraints
- ecosystem state

Admission control is enforced by the dispatcher.

---

## Priority Management

The dispatcher evaluates and manages priority.

Priority management includes:

- scheduling decisions
- conflict resolution
- emergency preemption

Emergency priority handling MUST follow explicit policy rules.

---

## Transport Flow Coordination

The dispatcher coordinates transport flows.

Flow coordination includes:

- flow identification
- lifecycle management
- resource allocation
- termination decisions

Flows may span multiple stations.

---

## Diagnostics and Observability

The dispatcher is the primary source of ecosystem-level diagnostics.

Diagnostics may include:

- routing outcomes
- admission decisions
- policy enforcement events
- capability mismatches

Diagnostics MUST NOT expose payload content.

---

## Centralized and Distributed Models

The dispatcher is a logical authority.

Its implementation MAY be:

- centralized
- distributed
- hierarchical
- federated

All implementations MUST preserve authoritative behavior.

---

## Failure Handling

Dispatcher failure handling is implementation-defined.

Requirements:

- failure MUST NOT violate protocol safety
- undefined behavior MUST be avoided
- recovery MUST be deterministic

Fallback behavior MAY be defined by policy.

---

## Dispatcher and Stations

The relationship between dispatcher and stations is asymmetric.

Stations:

- report capabilities
- follow routing decisions
- emit diagnostics

Stations MUST NOT:

- override dispatcher policy
- make independent routing decisions
- reinterpret authority

---

## Extension and Compatibility

Dispatcher behavior is governed by never-breaking rules.

Extensions MUST:

- be additive
- preserve authority semantics
- avoid hidden dependencies

Compatibility MUST be preserved across versions.

---

## Summary

The dispatcher is the governing authority of the Keke ecosystem.

It enforces order, policy, and predictability while preserving payload
opacity and protocol stability.

---

End of dispatcher model specification.
