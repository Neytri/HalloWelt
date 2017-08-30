// Inkrement und Dekrement
//
// Beispielaufgabe aus https://de.wikibooks.org/wiki/C%2B%2B-Programmierung/_Einf%C3%BChrung_in_C%2B%2B/_Rechnen_(lassen)
// um die unterschiedlichen rechenmodi aufzuzeigen. Ich hab mir das hier noch mal her kopiert um mir das in dieser
// zusammenfassung immer wieder vor augen führen zu können und auch um immer wieder mal zu versuchen die Rechnung
// nachzuvollziehen und die einzelnen unterschiede zu verstehen.

#include <iostream>

int main(){
    int Zahl;                             // Anlegen einer Variable

    std::cout << "Zahl direkt ausgeben:\n";

    Zahl = 5;                             // Zahl den Wert 5 zuweisen

    std::cout << Zahl << ' ';             // Zahl ausgeben

    Zahl++;                               // Inkrement Postfix (Zahl == 6)
    std::cout << Zahl << ' ';             // Zahl ausgeben

    ++Zahl;                               // Inkrement Präfix  (Zahl == 7)
    std::cout << Zahl << ' ';             // Zahl ausgeben

    Zahl--;                               // Dekrement Postfix (Zahl == 6)
    std::cout << Zahl << ' ';             // Zahl ausgeben

    --Zahl;                               // Dekrement Präfix  (Zahl == 5)
    std::cout << Zahl << ' ';             // Zahl ausgeben

    std::cout << "\nRückgabewert des Operators ausgeben:\n";

    Zahl = 5;                             // Zahl den Wert 5 zuweisen

    std::cout << Zahl   << ' ';           // Zahl ausgeben
    std::cout << Zahl++ << ' ';           // Inkrement Postfix (Zahl == 6)
    std::cout << ++Zahl << ' ';           // Inkrement Präfix  (Zahl == 7)
    std::cout << Zahl-- << ' ';           // Dekrement Postfix (Zahl == 6)
    std::cout << --Zahl << ' ';           // Dekrement Präfix  (Zahl == 5)

    std::cout << "\nEndwert von Zahl: " << Zahl << std::endl;
}
