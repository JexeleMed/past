// Jakub Majer 1F
#include <iostream>
#include <math.h>
using namespace std;

float a,b,c=0; // wsp�czynniki r�wnania
float delta=0; // delta r�wnania
float x1,x2=0; //x1 jedno rozwi�zanie r�wnania, x2 drugie opcjonalne rozwi�zanie r�wnania
	
int main ()
{
	setlocale( LC_ALL, "" ); // polskie znaki
cout <<"y = ax^2 + bx +c"<< endl; // wz�r r�wnania

//wprowadzanie wsp�ycznnik�w
cout <<"Podaj liczb� a:" << endl;
cin >> a;
cout <<"Podaj liczb� b:" << endl;
cin >> b;
cout <<"Podaj liczb� c:" << endl;
cin >> c;

float delta =(pow(b, 2.0))-4*a*c; //wz�r na delt� r�wnania (delta r�wnania)
	
// warunki dot. wynik�w w zale�no�ci od warto�ci delty	
	if(delta<0) // delta < 0
	{
		cout<<"R�wnanie nie ma �adnych pierwiastk�w" << endl;	
	}
	
	
	if (delta==0) // delta = 0
	{
		float x1= -b/(2*a);
		cout <<"R�wnianie posiada jedno rozwi�zanie"<< x1 << endl;
		cout<<"x = " << x1 << endl;
	}


	if (delta>0)
	{
		float x1=(-b-sqrt(delta))/(2*a);
		float x2=(-b+sqrt(delta))/(2*a);
		cout <<"R�wnanie posiada dwa rozwi�zania" << endl;
		cout <<"x = " << x1 <<" lub x = " << x2 << endl;	
	}	
	
	
	return 0;
}
