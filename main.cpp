#include <iostream>
#include <string>

// Practice 13 · Part 1 — Noe Zuniga
// CIS 5 Week 13 · Word tools

std::string banner(const std::string& name) {
  return "Hello, " + name + "!";
}

std::string initials(const std::string& first, const std::string& last) {
  std::string out = "";

  if (first.size() > 0) {
    out += first[0];
  }

  if (last.size() > 0) {
    out += last[0];
  }

  return out;
}

int main() {
  std::string first, last;

  std::cout << "First: ";
  std::cin >> first;

  std::cout << "Last: ";
  std::cin >> last;

  std::string full = first + " " + last;

  std::cout << banner(full) << std::endl;
  std::cout << "Length: " << full.size() << std::endl;
  std::cout << "Initials: " << initials(first, last) << std::endl;

  return 0;
}
