import Foundation
import CppWrapper

public struct SwiftCppApp {
    public private(set) var text = "Hello, World!"

    public init() {
        let msg = (text as NSString).utf8String
        show_message(msg)
    }
}
