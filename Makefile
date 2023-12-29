build:
	npm run build

test: build
	npm run test

serve: build
	npm run wasm
	npm run web

release: build
	npm run wasm
	# GitHub pages doesn't like symbolic links
	cp tree-sitter-comment.wasm docs/js/tree-sitter-comment.wasm

.PHONY: build test serve release
