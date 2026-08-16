// Let T be the tree:
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
//
// Draw, as best as you can, the output of the algorithm postorderPrint(T,
// T.root()):
//
// void postorderPrint(const Tree& T, const Position& p) {
//     PositionList ch = p.children();
//     // list of children
//     for (Iterator q = ch.begin(); q != ch.end(); ++q) {
//         postorderPrint(T, *q);
//         cout << " ";
//     }
//     cout << *p;
//     // print element
// }
//
// Solution:
// grades hw1 hw2 hw3 homeworks/ pr1 pr2 pr3 programs/ cs016/ buylow sellhigh
// papers/ market demos/ projects/ grades cs252/ /user/rt/courses/

int main() { return 0; }
