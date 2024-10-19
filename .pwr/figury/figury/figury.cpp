// Jakub Majer
#include <iostream>
#include <list>
#include <string>


struct figura {
    std::string nazwa;
    double pole;
    double obwod;

};

int main() {

    std::list<figura> figury;

    figury.push_back({"Kwadrat", 25.0, 20.0});
    figury.push_back({"Prostokat", 55.0, 80.0});
    figury.push_back({"Trojkat", 44, 30});
    figury.push_back({"Kolo", 28.0, 20.0});

    int ref = 0;
    int choice = 0;
    int count = 1;
    for(;;) {
        
        std::cout << "Menu:" << std::endl;
        std::cout << "1 - Dodaj figure" << std::endl;
        std::cout << "2 - Usun figure " << std::endl;
        std::cout << "3 - Pokaz figury" << std::endl;
        std::cout << "4 - Zamknij" << std::endl;
        std::cin >> ref; 


        switch(ref) {

        

        case 1: {
            std::string nazwa;
            double pole, obwod;
            std::cout << "Podaj nazwe: ";
            std::cin >>  nazwa;
            std::cout << "Podaj pole: ";
            std::cin >>  pole;
            std::cout << "Podaj obwod: ";
            std::cin >>  obwod;
            if(obwod > 0 && pole > 0) {
                figury.push_back({nazwa, pole, obwod});
                std::cout << std::endl << "Dodawanie powiodlo sie" << std::endl;
            }
            else {
                std::cout << "Niepoprawne dane wejsciowe"<< std::endl;
            }
            break;
        } 

        case 2: {
            if (figury.empty())
                std::cout <<"Lista jest pusta";
            else {
                std::cout << "Lista figur: " << std::endl;
                for(const auto& figura : figury) {
                    std::cout << count << ". " << figura.nazwa << std::endl;
                    count++;
                }
                std::cout << "Ktora figure chcesz usunac? " << std::endl;
                std::cin >> choice;
                choice--;
                    if(choice>=0 && choice < figury.size()) {
                        auto it = figury.begin();
                        advance(it, choice);
                        figury.erase(it);
                        std::cout << "Usuwanie zakonczone" << std::endl;
                    }
                    count = 1;

            }
            break;

        }
       
        case 3: {
            if (figury.empty())
                std::cout <<"Lista jest pusta";
            else {
                std::cout << "Liczba figur w liscie: " << figury.size() << std::endl;
                std::cout << "Lista figur: " << std::endl;
                for(const auto& figura : figury){
                    std::cout << "Nazwa: " << figura.nazwa << ", Pole: " << figura.pole << ", Obwod: " << figura.obwod << std::endl;
                }
            }

            break;
            }


        
        case 4: {
            std::cout << "Exiting";
            return 0;
            
        }
        default: {
            std::cout <<"Niepoprawne polecenie." << std::endl;
            break;
        }
        }
    }

    return 0;

}