// Give a recursive function for removing all the elements in a stack.
//
// Solution:
//
// Algorithm clear(S):
//   if not S.isEmpty() then
//     S.pop()
//     clear(S)

#include <cassert>
#include <iostream>
#include <stack>

void clear(std::stack<int>& my_stack) {
    if (!my_stack.empty()) {
        my_stack.pop();
        clear(my_stack);
    }
}

int main() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << "Size before clear: " << s.size() << std::endl;
    clear(s);
    std::cout << "Size after clear: " << s.size() << std::endl;

    assert(s.empty());
    return 0;
}
