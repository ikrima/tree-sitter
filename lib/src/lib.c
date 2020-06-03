// The Tree-sitter library can be built by compiling this one source file.
//
// The following directories must be added to the include path:
//   - include

#define _POSIX_C_SOURCE 200112L

#if defined(_MSC_VER)
__pragma(warning(push))
__pragma(warning(disable:4668))
#endif

#include "./get_changed_ranges.c"
#include "./language.c"
#include "./lexer.c"
#include "./node.c"
#include "./parser.c"
#include "./query.c"
#include "./stack.c"
#include "./subtree.c"
#include "./tree_cursor.c"
#include "./tree.c"

#if defined(_MSC_VER)
__pragma(warning(pop))
#endif