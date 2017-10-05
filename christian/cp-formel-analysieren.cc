#include <iostream>
#include <string>
#include <list>

std::list<int> tokenize(std::string formel) {
  std::list<int> tokens;

  for (char ch: formel) {
    if (ch == '+') {
      tokens.push_back(2);
    } else if (ch == '*') {
      tokens.push_back(3);
    } else if (ch >= '0' && ch <= '9') {
      tokens.push_back(1);
    } else {
      tokens.push_back(-1);
    }
  }

  return tokens;
}

void analyze(std::string formel) {
  for (char ch: formel) {
    if (ch == '+') {
      std::cout << "PLUS" << '\n';
    } else if (ch >= '0' && ch <= '9') {
      std::cout << "ZAHL" << '\n';
    } else {
      std::cout << "<unbekannt>\n";
    }
  }
}

struct Token {
  int code;
  int number; // 42, 1234, 7, ...
};

int main() {
  std::string formel;

  std::cout << "Eingabe: ";
  std::cin >> formel;

  std::cout << "Ausgabe: " << formel << '\n';

  //analyze(formel);
  std::list<int> tokens = tokenize(formel);

  for (int token : tokens) {
    std::cout << token << '\n';
  }

  return 0;
}
