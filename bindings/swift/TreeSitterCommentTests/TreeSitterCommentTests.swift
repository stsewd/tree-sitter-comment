import XCTest
import SwiftTreeSitter
import TreeSitterComment

final class TreeSitterCommentTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_comment())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Comment grammar")
    }
}
