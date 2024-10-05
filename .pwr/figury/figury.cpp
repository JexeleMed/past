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

    int ref;

    for(;;) {
        
        std::cout << "Menu:" << std::endl;
        std::cout << "1 - Dodaj figure" << std::endl;
        std::cout << "2 - Usun figure " << std::endl;
        std::cout << "3 - Pokaz figure" << std::endl;
        std::cout << "4 - Zamknij" << std::endl;
        std::cin >> ref; 


        if(ref == 1) {
            std::string nazwa;
            double pole, obwod;
            std::cout << "Podaj nazwe: ";
            std::cin >>  nazwa;
            std::cout << "Podaj pole: ";
            std::cin >>  pole;
            std::cout << "Podaj obwod: ";
            std::cin >>  obwod;

            std::cout << std::endl << "Dodawanie powiodlo sie" << std::endl;
        } 

        if (ref == 4) {
            std::cout << "Exiting";
            break;
            
        }

    }

    return 0;

}