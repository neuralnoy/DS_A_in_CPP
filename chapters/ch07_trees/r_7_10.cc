// Describe a modification to the parenPrint function given in code fragment below,
// so that it uses the size function for string objects to output the
// parenthetic representation of a tree with line breaks and spaces added to
// display the tree in a text window that is 80 characters wide.
//
// Code Fragment:
//
// void parenPrint(const Tree& T, const Position& p) {
//     cout << *p;  // print node’s element
//     if (!p.isExternal()) {
//         PositionList ch = p.children();  // list of children
//         cout << "( ";                    // open
//         for (Iterator q = ch.begin(); q != ch.end(); ++q) {
//             if (q != ch.begin()) cout << " ";  // print separator
//             parenPrint(T, *q);                 // visit the next child
//         }
//         cout << " )";  // close
//     }
// }
//
// Solution:
//
// Pass a column counter by reference and the current depth to track the position.
// Before printing any string, check its size(). If adding it exceeds 80 columns,
// output a newline and indent with spaces corresponding to the depth.
//
// void parenPrint(const Tree& T, const Position& p, int& col, int depth = 0) {
//     string elem = *p;
//
//     auto print = [&](const string& s) {
//         if (col + s.size() > 80) {
//             cout << "\n" << string(depth * 2, ' ');
//             col = depth * 2;
//         }
//         cout << s;
//         col += s.size();
//     };
//
//     print(elem);
//     if (!p.isExternal()) {
//         PositionList ch = p.children();
//         print("( ");
//         for (Iterator q = ch.begin(); q != ch.end(); ++q) {
//             if (q != ch.begin()) print(" ");
//             parenPrint(T, *q, col, depth + 1);
//         }
//         print(" )");
//     }
// }

int main() { return 0; }
