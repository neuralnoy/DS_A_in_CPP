// Let T be the tree like:
//
// /user/rt/courses/
// ├── cs016/
// │   ├── grades
// │   ├── homeworks/
// │   │   ├── hw1
// │   │   ├── hw2
// │   │   └── hw3
// │   └── programs/
// │       ├── pr1
// │       ├── pr2
// │       └── pr3
// └── cs252/
//     ├── projects/
//     │   ├── papers/
//     │   │   ├── buylow
//     │   │   └── sellhigh
//     │   └── demos/
//     │       └── market
//     └── grades
//
// a. Give the output of preorderPrint(T,T.root()).
//
// void preorderPrint(const Tree& T, const Position& p) {
//     cout << *p;                      // print element
//     PositionList ch = p.children();  // list of children
//     for (Iterator q = ch.begin(); q != ch.end(); ++q) {
//         cout << " ";
//         preorderPrint(T, *q);
//     }
// }
//
//
// b. Give the output of parenPrint(T,T.root()).
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
//
//
// Solution:
//
// a. /user/rt/courses/ cs016/ grades homeworks/ hw1 hw2 hw3 programs/ pr1 pr2
// pr3 cs252/ projects/ papers/ buylow sellhigh demos/ market grades
//
// b. /user/rt/courses/( cs016/( grades homeworks/( hw1 hw2 hw3 ) programs/( pr1
// pr2 pr3 ) ) cs252/( projects/( papers/( buylow sellhigh ) demos/( market ) )
// grades ) )

int main() { return 0; }
