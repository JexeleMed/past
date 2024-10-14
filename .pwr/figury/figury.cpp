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

    int ref = 0;

    for(;;) {
        
        std::cout << "Menu:" << std::endl;
        std::cout << "1 - Dodaj figure" << std::endl;
        std::cout << "2 - Usun figure " << std::endl;
        std::cout << "3 - Pokaz figure" << std::endl;
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
            figury.push_back({nazwa, pole, obwod});
            std::cout << std::endl << "Dodawanie powiodlo sie" << std::endl;
            break;
        } 

        case 2: {
            
            break;

        }
       
        case 3: {
            for(auto it : figury){

            }

            std::cout << "Debug" << std::endl;
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