# tree-sitter-comment

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for comment tags like `TODO:`, `FIXME(user):`, etc.
Useful to be embedded inside comments.

## Syntax

Since comment tags aren't a programming language or have a standard,
I have chosen to follow popular conventions for the syntax.

* Comment tags must contain:
  - Upper case ascii letters
  - Numbers
  - `-`, `_` (they can't start or end whit these characters)
* Optionally can have an user linked to the tag inside parentheses `()`
* The name must be followed by `:` and a whitespace

## Examples

```
TODO: something needs to be done
TODO(stsewd): something needs to be done by @stsewd

XXX: fix something else.
XXX:    extra white spaces.

(NOTE: this works too).

NOTE-BUG (stsewd): tags can be separated by `_`
NOTE_BUG: or by `_`.
```

## TODO

- Detect links?
- Detect tags that start with `#` (like when linking to a PR)?

## Why C?

Tree-sitter is a [LR parser](https://en.wikipedia.org/wiki/LR_parser) (context-free grammar),
that mean is works great for context-free grammars that don't require backtracking,
or have a state for whitespaces (indentation).
For this reason, parsing _languages_ that need to keep an state or falling back to a general token,
it requires some manual parsing in C.
