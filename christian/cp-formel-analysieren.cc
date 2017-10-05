#include <iostream>
#include <string>
#include <list>

struct Token {
  // -1 = token fehler
  // 1 = zahl
  // 2 = plus
  // 3 = mal
  int code;

  // zahlenwert, wenn code == 1 (zahl)
  int number;
};

std::list<Token> tokenize(std::string formel) {
  std::list<Token> tokens;

  for (char ch: formel) {
    if (ch == '+') {
      Token t;
      t.code = 2;
      tokens.push_back(t);
    } else if (ch == '*') {
      Token t;
      t.code = 3;
      tokens.push_back(t);
    } else if (ch >= '0' && ch <= '9') {
      Token t;
      t.code = 1;
      t.number = (ch - '0');
      tokens.push_back(t);
    } else {
      Token t;
      t.code = -1;
      tokens.push_back(t);
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

int main() {
  std::string formel;

  std::cout << "Eingabe: ";
  std::cin >> formel;

  std::cout << "Ausgabe: " << formel << '\n';

  std::list<Token> tokens = tokenize(formel);

  for (Token token : tokens) {
    switch (token.code) {
      case 1:
        std::cout << token.number << '\n';
        break;
      case 2:
        std::cout << '+' << '\n';
        break;
      case 3:
        std::cout << '*' << '\n';
        break;
      default:
        std::cout << "Token-fehler\n";
        break;
    }
  }

  return 0;
}
