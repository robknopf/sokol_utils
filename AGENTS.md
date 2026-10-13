## Fork policy (whirlinggizmo/sokol_utils only, never upstream)

This repository is the Whirling Gizmo fork of squk/sokol_utils, used by Whirling
Gizmo projects with the Whirling Gizmo fork of sokol (whirlinggizmo/sokol). In this
fork, the owner allows LLM agents to edit the headers, tests and docs, and to add,
commit and push when the user asks. This applies only to work in this fork.

squk/sokol_utils has no stated rules for LLM contributions. A PR to it says in its
description that it was prepared with an AI coding agent. For a PR to
squk/sokol_utils:

- Create the branch from `upstream/main` (https://github.com/squk/sokol_utils),
  never from this fork's `main`, and cherry-pick only the commits for the PR.
- Leave out the fork's own commits: this file, the README's fork section and the
  altered-source notice at the top of `sokol_app_utils.h`.

## Keeping in step with sokol

`sokol_app_utils.h` reads sokol_app.h's private state (`_sapp`), so it must
compile against the whirlinggizmo/sokol commit its users pin. The commit it was last
checked against is in the README's fork section. Check again whenever either
side changes.
