// Write a C++ program that can input any polynomial in standard algebraic
// notation and outputs the first derivative of that polynomial.

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

struct Term {
  int coefficient;
  int exponent;
};

std::string RemoveSpaces(const std::string &input) {
  std::string result;
  for (char c : input) {
    if (!std::isspace(static_cast<unsigned char>(c))) {
      result += c;
    }
  }
  return result;
}

std::vector<std::string> SplitIntoTerms(const std::string &input) {
  std::vector<std::string> terms;

  for (size_t i = 0; i < input.size();) {
    size_t start = i;

    // Move past sign
    if (input[i] == '+' || input[i] == '-') {
      ++i;
    }

    // Move until next sign or end
    while (i < input.size() && input[i] != '+' && input[i] != '-') {
      ++i;
    }

    terms.push_back(input.substr(start, i - start));
  }

  return terms;
}

Term ParseTerm(const std::string &term) {
  Term result{0, 0};

  int sign = 1;
  size_t pos = 0;

  // Determine sign
  if (term[pos] == '+') {
    sign = 1;
    ++pos;
  } else if (term[pos] == '-') {
    sign = -1;
    ++pos;
  }

  size_t xPos = term.find('x', pos);

  if (xPos != std::string::npos) {
    // Term contains variable

    // Extract coefficient
    if (xPos == pos) {
      result.coefficient = 1;
    } else {
      result.coefficient = std::stoi(term.substr(pos, xPos - pos));
    }

    result.coefficient *= sign;

    // Determine exponent
    if (xPos + 1 < term.size() && term[xPos + 1] == '^') {
      result.exponent = std::stoi(term.substr(xPos + 2));
    } else {
      result.exponent = 1;
    }
  } else {
    // Constant term
    result.coefficient = sign * std::stoi(term.substr(pos));
    result.exponent = 0;
  }

  return result;
}

std::vector<Term> Differentiate(const std::vector<Term> &terms) {
  std::vector<Term> derivative;

  for (const Term &t : terms) {
    if (t.exponent > 0) {
      Term derived;
      derived.coefficient = t.coefficient * t.exponent;
      derived.exponent = t.exponent - 1;
      derivative.push_back(derived);
    }
  }

  return derivative;
}

std::string FormatPolynomial(const std::vector<Term> &terms) {
  if (terms.empty()) {
    return "0";
  }

  std::string result;

  for (size_t i = 0; i < terms.size(); ++i) {
    int coeff = terms[i].coefficient;
    int exp = terms[i].exponent;

    if (coeff == 0)
      continue;

    // Handle sign
    if (i > 0) {
      if (coeff > 0) {
        result += "+";
      }
    }

    if (exp == 0) {
      result += std::to_string(coeff);
    } else {
      if (coeff == -1) {
        result += "-";
      } else if (coeff != 1) {
        result += std::to_string(coeff);
      }

      result += "x";

      if (exp != 1) {
        result += "^" + std::to_string(exp);
      }
    }
  }

  return result.empty() ? "0" : result;
}

int main() {
  std::string input;

  std::cout << "Enter a polynomial: ";
  std::getline(std::cin, input);

  std::string normalized = RemoveSpaces(input);

  if (normalized.empty()) {
    std::cout << "0\n";
    return 0;
  }

  // Ensure first term has explicit sign
  if (normalized[0] != '+' && normalized[0] != '-') {
    normalized = "+" + normalized;
  }

  std::vector<std::string> termStrings = SplitIntoTerms(normalized);

  std::vector<Term> terms;
  for (const std::string &t : termStrings) {
    terms.push_back(ParseTerm(t));
  }

  std::vector<Term> derivative = Differentiate(terms);

  std::string output = FormatPolynomial(derivative);

  std::cout << "Derivative: " << output << std::endl;

  return 0;
}
