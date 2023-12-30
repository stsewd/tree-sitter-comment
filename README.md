# tree-sitter-comment

[![CI](https://github.com/stsewd/tree-sitter-comment/workflows/CI/badge.svg)](https://github.com/stsewd/tree-sitter-comment/actions?query=workflow%3ACI+branch%3Amaster)

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for comment tags like `TODO:`, `FIXME(user):`, etc.
Useful to be embedded inside comments.

Check the playground at <https://stsewd.dev/tree-sitter-comment/>.

## Syntax

Since comment tags aren't a programming language or have a standard,
I have chosen to follow popular conventions for the syntax.

### Comment tags

Comment tags can be:

- Simple tags: A single uppercase word (tag name), optionally followed by `:`.
  For example: `TODO`, `TODO:`.
- Annotated tags: A single uppercase word (tag name), followed by an annotation inside parentheses `()`, followed by `:`.
  For example:  `TODO (user):`.

Tag names are composed of:

- Upper case ASCII letters
- Numbers (can't start with one)
- `-`, `_` (they can't start or end with these characters)

### URIs

* http and https links are recognized

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

NOTE is also a valid tag.

This will be recognized as a URL
https://github.com/stsewd/.

Even if the URL is surrounded by parenthesis (https://stsewd.dev)
```

## FAQ

### All uppercase words are highlighted as tags, why?

**Short answer:**

Use a more specific query to match only the tags you want, for example:

```scm
((tag (name) @todo)
 (#any-of? @todo "TODO" "NOTE" "FIXME"))
```

**Long answer:**

This grammar use to recognize tags followed by `:` only, but it's not uncommon to see tags without `:`.
In order to match those types of tags users had to match against `text` nodes,
but since every word is a text node, that operation was slow.
So now the grammar matches recognizes all uppercase words as tags instead,
and no longer exposes `text` nodes.

### Can I highlight references to issues, PRs, MRs, like `#10` or `!10`?

This grammar doesn't provide a token for it,
but if you think it should be supported, feel free to open an issue.

In the past, this was possible by matching against `text` nodes,
but they are no longer exposed, see https://github.com/stsewd/tree-sitter-comment/pull/33.

### I'm using Neovim and don't see all tags highlighted

To avoid false positives, Neovim doesn't highlight all tags,
but a list of specific ones,
see the list at [`queries/comment/highlights.scm`](https://github.com/nvim-treesitter/nvim-treesitter/blob/master/queries/comment/highlights.scm).

If you want your tag highlighted, you can extend the query locally, see `:h treesitter-query`.
Or if you think it's very common, you can suggest it [upstream](https://github.com/nvim-treesitter/nvim-treesitter).

## Why C?

Tree-sitter is a [LR parser](https://en.wikipedia.org/wiki/LR_parser) for context-free grammars,
that means it works great for grammars that don't require backtracking,
or to keep a state for whitespaces (like indentation).
For these reasons, parsing _languages_ that need to keep a state or falling back to a general token,
it requires some manual parsing in C.

While it may be possible to write a simple grammar (like this one) in pure JS,
it would need to make use of the `conflicts` feature or not expose some tokens,
resolving conflicts is slow in tree-sitter.
See https://github.com/stsewd/tree-sitter-comment/pull/33.

If you are able to find a way to write this grammar in pure JS that doesn't make it slow, feel free to open a PR!

## Projects using this grammar

- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
- [helix](https://github.com/helix-editor/helix)
- Yours?

## Other grammars

- [tree-sitter-rst](https://github.com/stsewd/tree-sitter-rst): reStructuredText grammar.
