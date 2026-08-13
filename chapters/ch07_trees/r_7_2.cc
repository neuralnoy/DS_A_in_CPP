// The following questions refer to the following tree:
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
// a. Which node is the root?
// b. What are the internal nodes?
// c. How many descendents does node cs016/ have?
// d. How many ancestors does node cs016/ have?
// e. What are the siblings of node homeworks/?
// f. Which nodes are in the subtree rooted at node projects/?
// g. What is the depth of node papers/?
// h. What is the height of the tree?
//
//
// Solution:
//
// a. It is "/user/rt/courses/".
// b. /user/rt/courses/, cs016, homeworks, programs, cs252, projects, papers, demos
// c. 10 descendents (or 9 "proper" descendents, without including the node itself).
// d. 2 ancestors (or 1 "proper" ancestor).
// e. grades, programs/
// f. projects/, papers/, demos/, buylow, sellhigh, market
// g. 3 (project/ -> cs252/ -> /user/rt/courses/. 3 edges down to the root)
// h. I assume it is about max hight, then it is 4 (4 edges up to the deepest external node)

int main() { return 0; }
