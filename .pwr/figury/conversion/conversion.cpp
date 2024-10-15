//Jakub Majer
#include <iostream>
#include <string>

// Konwersja wejscia na liczbe w systemie decymanlnym
int toDecimal(std::string liczba, int baza) {
    int decimal = std::stoi(liczba, nullptr, baza);
    return decimal;
}

// Konwersja z systemu decymalnego na docelowy
std::string conversion(int liczba, int podstawa) {
    std::string wynik;
    std::string cyfry = "0123456789ABCDEF"; // Lancuch obslugiwanych "cyfr", az do systemy szesnastkowego

    if (liczba == 0) {
    return "0";
    }

    while (liczba > 0) {
        wynik = cyfry[liczba % podstawa] + wynik;
        liczba /= podstawa;
    }

    return wynik;
}

int main() {

    std::string liczba;
    int baza = 0;
    int cel = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    std::cout << "Podaj system wprowadzonej liczby: ";
    std::cin >> baza;
    std::cout << "Podaj docelowy system: ";
    std::cin >> cel;

    if(cel < 2 || baza <2 || cel > 16 || baza >16) {
        std::cout << "Zakres wykracza poza zaimplementowane systemy liczbowe";
        return 0;
    }
    std::cout << conversion(toDecimal(liczba, baza), cel);

    return 0;
}

