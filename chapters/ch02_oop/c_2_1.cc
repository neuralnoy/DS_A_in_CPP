#include <iostream>
#include <string>

int main() {
  std::string s = "#include <iostream>\n#include <string>\n\nint main() {\n    "
                  "std::string s = ";
  std::string t = ";\n    std::cout << s << \"\\\"\" << s << \"\\\"\" << t << "
                  "std::endl;\n    return 0;\n}";
  std::cout << s << "\"" << s << "\"" << t << std::endl;
  return 0;
}
