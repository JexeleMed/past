// JAKUB MAJER 1F
#include <iostream>
#include <math.h>

using namespace std;


int a=5; // zmienna pierwsza
int b=7; // zmienna druga

int main(){
	setlocale( LC_ALL, "" );

cout << "Pocz�tkowa warto�� zmiennej: " << a << endl; // przed inkrementacj� 
cout << "Warto�� zmiennej po operacji: "<< ++a << endl; // po inkrementacji

cout << "________________________________________________________" << endl;

cout << "Pocz�tkowa warto�� zmiennej: "<< b << endl; // przed dekrementacj�
cout << "Warto�� zmiennej po operacji: "<< --b << endl; // po dekrementacji

return 0;
}
