# Keke Ecosystem – Routing and Policy (v1)

This document defines routing and policy mechanisms within the Keke
ecosystem, version 1.

Routing and policy are distinct but interrelated concepts governed by
the dispatcher.

This document is normative.

---

## Purpose

Routing and policy together ensure that transport through the Keke
ecosystem is predictable, controlled, and civil.

Routing determines *where* packets and flows move.
Policy determines *whether and under what conditions* they are allowed
to move.

Both are enforced by the dispatcher.

---

## Separation of Concerns

Keke enforces a strict separation:

- Routing answers: where to send
- Policy answers: whether to allow

Routing MUST NOT override policy.
Policy MAY restrict routing.

This separation prevents ambiguity and implicit behavior.

---

## Routing Model

Routing is the process of selecting a path for packets or flows through
the ecosystem.

Routing decisions:

- are made exclusively by the dispatcher
- may be static or dynamic
- may change over time
- are deterministic given the same inputs

Routing does not inspect payload content.

---

## Routing Inputs

Routing decisions may consider:

- declared station capabilities
- current ecosystem topology
- policy constraints
- priority levels
- flow context
- operational state

All inputs are transport-level only.

---

## Policy Model

Policy is a set of explicit rules governing transport behavior.

Policy rules may define:

- which stations may communicate
- priority limits
- rate limits
- emergency handling constraints
- admission requirements

Policy rules are authoritative.

---

## Policy Evaluation

Policy evaluation is performed by the dispatcher.

Policy evaluation:

- precedes routing decisions
- may block or constrain routing
- produces deterministic outcomes

If policy denies transport, routing MUST NOT proceed.

---

## Policy Enforcement

Policy enforcement includes:

- packet admission or rejection
- flow admission or termination
- priority adjustment
- routing restriction

Enforcement actions are taken by the dispatcher.

Stations MUST comply with enforcement decisions.

---

## Determinism

Given the same:

- policy set
- routing inputs
- ecosystem state

the dispatcher MUST produce the same routing and policy decisions.

Determinism is required for predictability and debugging.

---

## Dynamic Behavior

Routing and policy may adapt to:

- topology changes
- station availability
- load conditions
- emergency situations

Adaptation MUST remain deterministic and policy-compliant.

---

## Emergency Interaction

Emergency priority interacts with routing and policy.

Rules:

- emergency traffic MAY bypass certain constraints
- emergency traffic MUST still follow explicit policy
- misuse of emergency priority MUST be detectable

Emergency does not imply unrestricted access.

---

## Flow-Level Considerations

Routing and policy may apply at the flow level.

Flow-level handling may include:

- flow admission
- flow prioritization
- flow termination
- flow rerouting

Flow behavior remains payload-agnostic.

---

## Observability

Routing and policy decisions SHOULD produce diagnostic events.

Diagnostics may include:

- admission outcomes
- routing selections
- policy rule matches
- enforcement actions

Diagnostics MUST NOT expose payload content.

---

## Compatibility Rules

Routing and policy behavior are governed by never-breaking rules.

Changes MUST be additive.
Existing semantics MUST remain valid.

---

## Summary

Routing and policy together define controlled movement within Keke.

Routing determines paths.
Policy determines permission.

Both are authoritative, deterministic, and enforced by the dispatcher.

---

End of routing and policy specification.
