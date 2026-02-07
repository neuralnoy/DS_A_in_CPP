// R-1.1 Which of the following is not a valid C++ variable name? (There may be
// more than one.) a. i_think_i_am_valid b. i_may_have_2_many_digits_2_be_valid
// c. _I_start_and_end_with_underscores
// d. I_Have_A_Dollar_$ign
// e. I_AM_LONG_AND_HAVE_NO_LOWER_CASE_LETTERS
//
// ANSWERS:
//
//  a. This is a legal C++ identifier. It starts with a letter and contains only
//  letters and underscores.
//
//  b. This is a legal C++ identifier. There is no limit on the number of digits
//  or length (within reason, as imposed by the compiler), and digits can be
//  used as long as they are not the first character.
//
//  c. Valid, but:
//  Single leading underscores are allowed, but:
//  Leading underscores followed by a capital letter, or double underscores
//  anywhere, are reserved for compiler or standard library implementations.
//
//  d. Is  not valid (dollar sign).
//
//  e. Valid — All caps is typically used for constants or macros by convention,
//  but the name is technically valid.

int main() {
  // dummy main for CMake
}
