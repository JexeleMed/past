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

    return 0;

}