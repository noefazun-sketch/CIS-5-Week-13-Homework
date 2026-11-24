#include <iostream>
#include <string>

// Practice 13 · Part 2 — Noe Zuniga
// CIS 5 Week 13 · The struct your final needs

struct Account {
  std::string name;
  double balance;
};

void printAccount(const Account& a) {
  std::cout << a.name << " " << a.balance << "\n";
}

int main() {
  Account account1{"Noe", 500.25};
  Account account2{"Sam", 250.50};

  printAccount(account1);
  printAccount(account2);

  return 0;
}
