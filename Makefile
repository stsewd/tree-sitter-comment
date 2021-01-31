build:
	tree-sitter generate

test: build
	tree-sitter test

serve: build
	tree-sitter build-wasm
	tree-sitter web-ui

release: build format
	tree-sitter build-wasm

format:
	clang-format -i \
	  --style="{BasedOnStyle: webkit, IndentWidth: 2}" \
	  src/scanner.c \
	  src/tree_sitter_comment/*

.PHONY: build test serve release format
