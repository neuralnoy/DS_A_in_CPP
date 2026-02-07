// R-1.4 What are the contents of string s after executing the following statements.
// string s ="abc";
// string t = "cde";
// s += s + t[1] + s;

// Answer:
// "abcabcdabc"
// s = "abc"
// t[1] = "d"
// s = "abc"
// s += s + t[1] + s is the same as s = s + (s + t[1] + s)

#include <iostream>
#include <string>

void concatStrings() {
    std::string s = "abc";
    std::string t = "cde";
    s += s + t[1] + s;
    std::cout << s << std::endl;
}

int main() {
    concatStrings();
}
