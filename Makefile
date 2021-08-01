build:
	npm run build

test: build
	npm run test

serve: build
	npm run wasm
	npm run web

release: build format
	npm run wasm

format:
	clang-format -i \
	  --style="{BasedOnStyle: webkit, IndentWidth: 2}" \
	  src/scanner.c \
	  src/tree_sitter_comment/*

.PHONY: build test serve release format
