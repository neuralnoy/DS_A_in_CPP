// Let T be the tree of form:
//
// /user/rt/courses/ 1K
// ├── cs016/ 2K
// │   ├── grades 8K
// │   ├── homeworks/ 1K
// │   │   ├── hw1 3K
// │   │   ├── hw2 2K
// │   │   └── hw3 4K
// │   └── programs/ 1K
// │       ├── pr1 57K
// │       ├── pr2 97K
// │       └── pr3 74K
// └── cs252/ 1K
//     ├── projects/ 1K
//     │   ├── papers/ 1K
//     │   │   ├── buylow 26K
//     │   │   └── sellhigh 55K
//     │   └── demos/ 1K
//     │       └── market 4786K
//     └── grades 3K
//
// Compute, in terms of the values given
// in this figure, the output of algorithm diskSpace(T,T.root()).

// int diskSpace(const Tree& T, const Position& p) {
//     int s = size(p);                     // start with size of p
//     if (!p.isExternal()) {               // if p is internal
//         PositionList ch = p.children();  // list of p’s children
//         for (Iterator q = ch.begin(); q != ch.end(); ++q)
//             s += diskSpace(T, *q);             // sum the space of subtrees
//         cout << name(p) << ": " << s << endl;  // print summary
//     }
//     return s;
// }
//
// Solution:
// homeworks/: 10K
// programs/: 229K
// cs016/: 249K
// papers/: 82K
// demos/: 4787K
// projects/: 4870K
// cs252/: 4874K
// /user/rt/courses/: 5124K

int main() { return 0; }
