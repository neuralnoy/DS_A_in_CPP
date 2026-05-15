## Data Structures and Algorithms in C++

Based on the book "Data Structures and Algorithms in C++"
Second Edition from 2011
Authors: Michael T. Goodrich, Roberto Tamassia, David M. Mount

### Personal learning project with solutions of exercises


#### How to build:

```bash
mkdir build # make a build directory if doesn't exists
cd build # navigate to the directory
cmake .. # make
cmake --build . # and build -> find executables in the build directory
```

```bash
# to generate compile_commands.json in build directory
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -B build
```
