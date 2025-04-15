// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterComment",
    products: [
        .library(name: "TreeSitterComment", targets: ["TreeSitterComment"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterComment",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterCommentTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterComment",
            ],
            path: "bindings/swift/TreeSitterCommentTests"
        )
    ],
    cLanguageStandard: .c11
)
