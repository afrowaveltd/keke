# Keke Ecosystem – Terminology (v1)

This document defines Keke-specific terminology used throughout the Keke
v1 specification set.

These definitions are normative and override local wording in other
documents.

---

## Ecosystem

The complete set of interacting stations, dispatchers, routes, and policies
governed by Keke rules.

---

## Station

A transport participant operating within the Keke ecosystem.

A station:

- sends and receives TamTam packets
- declares capabilities
- follows dispatcher decisions
- does not define global policy

Stations may be endpoints, relays, or gateways.

---

## Dispatcher

The authoritative control entity of the Keke ecosystem.

A dispatcher:

- makes routing decisions
- enforces policy
- manages priorities
- coordinates diagnostics

Dispatcher authority overrides station-local preferences.

---

## Route

A defined path or sequence of stations used to deliver packets.

Routes:

- are determined by the dispatcher
- may change dynamically
- do not imply payload semantics

---

## Routing Decision

A decision made by the dispatcher determining how packets are forwarded
through the ecosystem.

Routing decisions consider:

- policy
- priority
- station capabilities
- ecosystem state

---

## Policy

A set of explicit rules governing transport behavior.

Policy may define:

- access constraints
- priority handling
- rate limits
- emergency behavior

Policy is enforced by the dispatcher.

---

## Priority

A relative importance level applied to packets or transport flows.

Priority affects scheduling and handling but does not define payload meaning.

---

## Emergency Priority

The highest priority level reserved for emergency transport.

Emergency priority:

- may preempt other traffic
- is governed by strict policy rules
- does not imply legitimacy or authority

---

## Transport Flow

A logical grouping of related packets coordinated as a unit.

Flows:

- are identified by context
- may be long-lived or transient
- are managed by the dispatcher

Flows do not define payload semantics.

---

## Capability

A declared transport-level feature or constraint of a station.

Capabilities are evaluated by the dispatcher during routing and admission.

---

## Admission

The process of deciding whether a packet or flow is allowed to enter or
continue through the ecosystem.

Admission decisions are made by the dispatcher.

---

## Scheduling

The process of ordering packet or flow handling based on priority and
policy.

Scheduling is coordinated by the dispatcher.

---

## Enforcement

The act of applying policy and routing decisions.

Enforcement may include:

- allowing transport
- delaying transport
- rerouting packets
- rejecting packets

---

## Diagnostic Event

A transport-level event recorded for observability and analysis.

Diagnostic events describe ecosystem behavior without exposing payload
content.

---

## Authority Model

The rule set defining decision-making power within Keke.

The authority model is explicit:

- dispatcher is authoritative
- stations are participants
- policy is enforced, not negotiated

---

## Compatibility

The property that Keke v1 definitions remain interoperable over time.

Compatibility is governed by additive evolution and never-breaking rules.

---

## Extension

An additive definition that introduces new behavior without invalidating
existing Keke v1 semantics.

---

## Version

A labeled, immutable definition of Keke behavior.

Keke v1 is stable and immutable.

---

End of Keke terminology.
