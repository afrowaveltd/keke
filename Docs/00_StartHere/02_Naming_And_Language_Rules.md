# Naming and Language Rules

This document defines mandatory naming and language rules for the
Afrowave / Keke / TamTam project.

These rules are normative for all specifications, documentation,
source code, and public materials unless explicitly stated otherwise.

---

## Language Rules

### English Only

All technical content MUST be written in English.

This includes:

- specifications
- documentation
- source code comments
- identifiers exposed in APIs
- protocol field names

The purpose is interoperability, long-term accessibility, and
cross-cultural neutrality.

---

### ASCII Only

All technical text MUST use ASCII characters only.

This requirement applies to:

- documents
- identifiers
- filenames
- protocol fields
- comments

Non-ASCII characters may be used only in non-technical, descriptive
contexts outside the scope of specifications or code.

---

## Naming Philosophy

Naming must be:

- precise
- stable
- unambiguous
- culturally respectful
- free of marketing language

Names are treated as part of the public interface and must follow
the never-breaking rule.

---

## Cultural Names

Cultural names are intentional and allowed.

Examples include:

- Afrowave
- Keke
- TamTam

Cultural names MUST:

- have a clearly defined scope
- not overload technical meaning
- not encode assumptions about implementation

Cultural names identify systems, not mechanisms.

---

## Technical Names

Technical identifiers MUST be:

- descriptive
- lowercase where possible
- composed of simple English words
- free of abbreviations unless widely accepted

Examples:

- dispatcher
- station
- capability
- payload
- transport_mode

Avoid cleverness. Prefer clarity.

---

## Files and Directories

### Directory Names

Directory names MUST:

- use ASCII
- use CamelCase for top-level folders (e.g. Docs, Specs, Src)
- use lowercase for nested technical folders where appropriate

Examples:

- Docs/00_StartHere/
- Specs/TamTam/v1/
- Src/C/tamtam_core/

---

### File Names

File names MUST:

- be descriptive
- use ASCII
- use underscores for word separation
- include numeric prefixes where order matters

Examples:

- 00_Project_Handoff.md
- 01_Glossary.md
- 02_Naming_And_Language_Rules.md
- 03_Packet_Format.md

---

## Version Naming

Versions MUST be explicit and immutable.

Rules:

- stable versions are named v1, v2, etc.
- draft or experimental work MUST be placed under vNext
- stable versions MUST NOT be modified in a breaking way

Version identifiers are part of the public contract.

---

## Specification Documents

Specification documents MUST:

- state scope clearly
- distinguish what is defined and what is not
- avoid implementation-specific language
- use normative keywords consistently

Recommended normative keywords:

- MUST
- MUST NOT
- SHOULD
- SHOULD NOT
- MAY

Keywords are interpreted according to common RFC-style conventions.

---

## Code Identifiers

Source code identifiers MUST:

- match terminology used in specifications
- avoid synonyms for the same concept
- prefer long, clear names over short, ambiguous ones

Example:
Use `dispatcher` consistently.
Do not alternate between `router`, `controller`, or `manager`.

---

## Avoided Naming Patterns

The following are discouraged or forbidden:

- marketing terms
- buzzwords
- emotional language
- humor in technical identifiers
- ambiguous abbreviations
- overloaded acronyms

Technical text must remain neutral and precise.

---

## Stability Rule

Once a name is introduced in a specification:

- it MUST NOT change meaning
- it MUST NOT be reused for a different concept
- it MAY be extended only in an additive way

Names are treated as part of the protocol surface.

---

## Authority

In case of conflict:

- specifications override documentation
- glossary definitions override local usage
- Afrowave principles override convenience

---

End of naming and language rules.
