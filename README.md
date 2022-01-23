# tree-sitter-comment

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for comment tags like `TODO:`, `FIXME(user):`, etc.
Useful to be embedded inside comments.

Check the playground at <https://stsewd.dev/tree-sitter-comment/>.

## Syntax

Since comment tags aren't a programming language or have a standard,
I have chosen to follow popular conventions for the syntax.

* Comment tags can contain:
  - Upper case ascii letters
  - Numbers (can't start with one)
  - `-`, `_` (they can't start or end whit these characters)
* Optionally can have an user linked to the tag inside parentheses `()`
* The name must be followed by `:` and a whitespace

If you think there are other popular conventions this syntax doesn't cover,
feel free to open a issue.

## Examples

```
TODO: something needs to be done
TODO(stsewd): something needs to be done by @stsewd

XXX: fix something else.
XXX:    extra white spaces.

(NOTE: this works too).

NOTE-BUG (stsewd): tags can be separated by `-`
NOTE_BUG: or by `_`.
```

## TODO

- Detect links?
- Detect tags that start with `#` (like when linking to a PR)?

## Why C?

Tree-sitter is a [LR parser](https://en.wikipedia.org/wiki/LR_parser) for context-free grammars,
that means it works great for grammars that don't require backtracking,
or to keep a state for whitespaces (like indentation).
For these reasons, parsing _languages_ that need to keep a state or falling back to a general token,
it requires some manual parsing in C.

## Other grammars

- [tree-sitter-rst](https://github.com/stsewd/tree-sitter-rst): reStructuredText grammar.
