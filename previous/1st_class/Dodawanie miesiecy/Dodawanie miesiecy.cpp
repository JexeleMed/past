//Miesi�ce
#include <iostream>
using namespace std;
int z,y,i=0;



int main ()
{
//Deklaracja pocz�tkowa
	setlocale( LC_ALL, "" ); // znaki polskie
	cout<<"Miesi�c rozpocz�cia:"<<endl;
	cin >> z;
	cout<<"Jesli chcesz przerwa� program wprowad� cyfry inne niz 1 lub 2 "<<endl;
	
do{
cout<<"Tw�j miesi�c to: ";
if(z==13) z=1;
if(z==0) z=12;

// Wyswietlenie zmiany
if(z==1) cout<<"Styczen"<<endl;

if(z==2) cout<<"Luty"<<endl;

if(z==3) cout<<"Marzec"<<endl;

if(z==4) cout<<"Kwiecie�"<<endl;

if(z==5) cout<<"Maj"<<endl;

if(z==6) cout<<"Czerwiec"<<endl;

if(z==7) cout<<"Lipiec"<<endl;

if(z==8) cout<<"Sierpien"<<endl;

if(z==9) cout<<"Wrzesien"<<endl;

if(z==10) cout<<"Pa�dziernik"<<endl;

if(z==11) cout<<"Listopad"<<endl;

if(z==12) cout<<"Grudzie�"<<endl;

cout<<"Idziemy w g�r�(1) czy w d�(2):"<<endl;
cin >> y;
// Kierunek zmiany	
	if(y==1)
	{
	z++;	
	}	
	if(y==2)
	{
	z--;
	}

}
while(y==1 or y==2);
cout<<"Program zosta� zatrzymany";
}
