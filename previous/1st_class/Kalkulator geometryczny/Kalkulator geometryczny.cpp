// JAKUB MAJER 1F
#include <iostream>
#include <math.h>
using namespace std;

int a,b,c,d,x; //a- bok 1, b - bok 2, c - obw�d, d - pole, x - suma kwadrat�w bok�w

int main() {
setlocale( LC_ALL, "" ); //lub czasem setlocale( LC_ALL, "pl_PL" );


cout << "Podaj miar� pierwszego boku: "; // bok 1	
cin >> a;
cout << "Pierwszy bok ma miar�:   " << a << endl;	


cout << "Podaj miar� drugiego boku: "; // bok 2
cin >> b;
cout << "Drugi bok ma miar�: " << b << endl;
cout << "_______________________________" << endl;


int c=a+a+b+b; // obw�d
int d=a*b;


cout << "Obw�d wynosi: " << c << endl;
cout << "Pole wynosi: " << d << endl;
x=pow (a, 2.0)+ pow (b, 2.0); // suma kwadrat�w bok�w
cout <<"Przek�tna ma miar�: " << sqrt (x)<< endl; // przek�tna
	return 0;
}
