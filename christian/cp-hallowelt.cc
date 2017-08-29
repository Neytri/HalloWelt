#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "Hello World!\nIch lerne jetzt \"C++\"." << std::endl; // Ausgabe in 2 Zeilen

  // iteriere ueber die Kommandozeilenparameter, welche man (optional) angeben kann
  for (int i = 0; i < argc; i++)
    std::cout << i << ": " << argv[i] << std::endl;

  // for clean code, I'd always return a value in main() - even though that's optional.
  return 0;
}
