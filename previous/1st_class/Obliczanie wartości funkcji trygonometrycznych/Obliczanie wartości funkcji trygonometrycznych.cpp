// Jakub Majer 1F
// Obliczanie warto�ci funkcji trygonometrycznych dla wprowadzonych k�t�w
#include <iostream>
#include <math.h>
#include <windows.h> //Sllep(ms)
#include <stdlib.h> //system("CLS")
#define M_PI 3.14159265358979323846
using namespace std;
float a,b,rad=0;

//Funkcje obliczaj�ce
float sinus(float rad)
{
	return sin(rad);
}
float cosinus(float rad)
{
	return cos(rad);
}
float tangens(float rad)
{
	return tan(rad);
}
float cotangens(float rad)
{
	return 1/tan(rad);
}
float przemiana(float a)
{
	rad = a*M_PI/180; // zamiana stopni na radiany
}


int main ()
{
	setlocale(LC_CTYPE, "Polish");
//Warto�ci pocz�tkowe
	cout <<"Podaj k�t: "<<endl;
	cin >> a;
	przemiana(a);
	unsigned short poz;

//MENU
for(;;)
{
	system("CLS");
	cout<<"1- Obliczanie sinusa"<<endl;
	cout<<"2- Obliczanie cosinusa"<<endl;
	cout<<"3- Obliczanie tangensa"<<endl;
	cout<<"4- Obliczanie cotangensa"<<endl;
	cout<<"5- Zmie� miar� k�ta"<<endl;
	cout<<"6- Wyj�cie"<<endl;
	
	cin>>poz;

	switch(poz)
	{
		case 1:
		{
			cout<<"Sinus k�ta "<<a<<" wynosi: "<<sinus(rad)<< endl;
			Sleep(5000);
			break;
		}
		case 2:
		{
			cout<<"Cosinus k�ta "<<a<<" wynosi: "<<cosinus(rad)<< endl;
			Sleep(5000);
			break; 
		}
		case 3:
		{
			cout<<"Tangens k�ta "<<a<<" wynosi: "<<tangens(rad)<< endl;
			Sleep(5000);
			break;	
		}
		case 4:
		{	
			cout<<"Cotangens k�ta "<<a<<" wynosi: "<<cotangens(rad)<< endl;
			Sleep(5000);
			break;			
		}
		case 5:
		{	
			cout<<"Wprowad� miar� nowego k�ta:"<<endl;
			cin >> a;
			przemiana(a);
			break;
		}
		case 6:
		{
			cout<<"Wychodzisz"<<endl;
			exit(0);
			break;
		}		
		default:
		{
		cout<<"Nie ma takiej pozycji";
		}
	}
	
}


}
