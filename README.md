# keke

Universal transport ecosystem built on a transportation metaphor.

## What is this?

**Afrowave** is the philosophical, cultural, and value framework of the project.

**Keke** is a civil transport ecosystem (a transport layer environment), inspired by accessible urban transport systems in Africa.

**TamTam** is the low-level transport protocol: rhythm and packet. It is designed to carry any data over any medium (network, serial, audio, USB, sneakernet), regardless of size.

## Core principles

- Payload is anonymous byte cargo. The protocol never interprets it.
- Data size must never limit data type. Segmentation belongs to higher layers.
- Never-breaking rule: once something exists, it may age but must not be removed.
- Multiple transport modes exist: standard, stream, group message, emergency, full-duplex (turn-based).
- Stations declare capabilities; packets may be rejected if requirements are not met.
- The dispatcher is the authority for routing, policy, and diagnostics.
- Strict layered architecture, designed bottom-up.
- Technical docs, APIs, and specs are English + ASCII (interoperability reason).

## Repository map

- `Docs/` – onboarding, guides, diagrams (non-normative)
- `Specs/` – normative specifications (versioned, never-breaking)
- `Src/` – minimal C core (types + API only; no serialization, no I/O)
- `Playground/` – experiments, demos, testing tracks
- `Assets/` – samples, traces, brand assets
- `Meta/` – roadmap, decisions, changelog

## Start here

1. `Docs/00_StartHere/00_Project_Handoff.md`
2. `Docs/00_StartHere/01_Glossary.md`
3. `Specs/TamTam/v1/00_Index.md`
4. `Specs/Keke/v1/00_Index.md`
5. `Meta/Decisions.md`

## Spec versioning

- `Specs/*/v1` is stable and must never be broken.
- `Specs/*/vNext` is draft space (not normative).
- Implementation follows specs. Minimal C core exists as a reality-check only.

## Contribution & translations

Community participation is welcome, but specifications are strict and versioned.

Comment Lens / Comment Translator provides translated comments without modifying source code:

- `.afrowave/comdict.live.json` – runtime, approved translations
- `.afrowave/comdict.work.json` – workflow proposals and metadata

Community translations are opt-in and always under author control.

## License

See `LICENSE`.
