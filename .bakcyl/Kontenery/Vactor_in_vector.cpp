//Vector w vectorze
#include <iostream>
#include <vector>


int main()
{
	int n,z;
	std::cout<<"Jaki rozmiar vectora?"<<std::endl;
	std::cin>>n;
	std::cout<<"Czym wypelnic?"<<std::endl;
	std::cin>>z;
	
	std::vector<int> vec(n,z);
	
	for(int number : vec) // p�tla range for, int number - tworzy nowy element, vec wskazuje kontener, z kt�rego pobierzemy zawarto��, p�tla zako��zy si� w momencie kiedy wszystkie elementy vectora si� wykonaj�
		{
			std::cout<<number;	
		}	
}
