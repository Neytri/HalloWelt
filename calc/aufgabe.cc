// Rechnen Sie die Ergebnisse der folgenden Aufgaben aus und schreiben sie ein Programm, welches das Gleiche tut.
// Zahl  = (500 - 100*(2 + 1))*5
// Zahl  = (Zahl - 700)/3
// Zahl += 50*2
// Zahl *= 10 - 8
// Zahl /= Zahl - 200
// #######################

#include <iostream>

int main(){
  int Zahl;

  Zahl = (500-100*(2+1))*5;                                 // 1000
  std::cout << "Zahl  = (500 - 100*(2 + 1))*5 = " << Zahl << std::endl;

  Zahl = (Zahl - 700)/3;                                    // 100
  std::cout << "Zahl  = (Zahl - 700)/3        = " << Zahl << std::endl;

  Zahl += 50+2;                                             // 200
  std::cout << "Zahl += 50+2                  = " << Zahl << std::endl;

  Zahl *= 10-8;                                             // 400
  std::cout << "Zahl *= 10-8                  = " << Zahl << std::endl;

  Zahl /= Zahl - 200;                                       // 2
  std::cout << "Zahl /= Zahl - 200            = " << Zahl << std::endl;

  std::cout << "------------------------------------" << std::endl;
  std::cout << "Zahl  = " << Zahl << std::endl;

  return 0;
}
