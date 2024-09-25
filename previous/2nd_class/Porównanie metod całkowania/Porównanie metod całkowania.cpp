//Jakub Majer 2F
#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h> 
#include <math.h>
#include<iomanip>

#define MAX(a,b) (a>b)?a:b

using namespace std;



//Funkcje trapezow
double f(double x)
{
	return x*x+x+9;
}

double Pole(int a, int b, int n) //Prostok�ty
{
	double h = (b-a)/(double)n; 
	double S = 0.0; 
	double podstawa_a = f(a), podstawa_b;
		
	for(int i=1;i<=n;i++)
	{
		podstawa_b = f(a+h*i);
		S += (podstawa_a+podstawa_b);
		podstawa_a = podstawa_b;
	}
	return S*0.5*h;
}

double Pole2(int a, int b, int n) //Trapezy
{
	double h = (b-a)/(double)n; //wysokos� trapez�w
	double S = 0.0; //zmienna b�dzie przechowywa� sum� p�l trapez�w
	double podstawa_a = f(a), podstawa_b;
		
	for(int i=1;i<=n;i++)
	{
		podstawa_b = f(a+h*i);
		S += (podstawa_a+podstawa_b);
		podstawa_a = podstawa_b;
	}
	return S*0.5*h;
}

//MONTE CARLO
int funcIn(float x, float y) {
if (( y > 0) && (y <= f(x)))
return 1;
else if (( y > 0) && (y <= f(x)))
return -1;
return 0;
}

double randomPoint(double a, double b) {
return a + (double)rand()/(double)(RAND_MAX+1) * (b-a);
}


int main() 
{
	setlocale(LC_CTYPE, "Polish");
	unsigned short poz;
	int a, b, n;
	float xp, xk, yp, yk, calka;
	int i, pointsIn;	
for(;;){
	Sleep(1000);
	system("CLS");
	cout<<"1- Ca�kowanie metod� trapez�ww"<<endl;
	cout<<"2- Ca�kowanie metod� prostok�t�w"<<endl;
	cout<<"3- Ca�kowanie metod� Monte Carlo"<<endl;
	cout<<"4- Por�wnanie"<<endl;
	cout<<"5- Wyj�cie"<<endl;
	cout<<"Podaj nr pozycji menu: ";
	cin>>poz;

	switch(poz)
	{
		case 1:
			{
				cout<<"Podaj przedzia� [a, b]\na = ";
				cin>>a;
				cout<<"b = ";
				cin>>b;
				cout<<"Podaj liczb� trapez�w: ";
				cin>>n;
	
				if(!(a<b))
					cout<<"To nie jest przedzia�!";
				else
					cout<<"Pole figury wynosi: "<<fixed<<setprecision(2)<<Pole2(a, b, n);
				Sleep(1000);
				break;	
			}
		case 2:
			{
				cout<<"Podaj przedzia� [a, b]\na = ";
 				cin>>a;
  				cout<<"b = ";
  				cin>>b;
  				cout<<"Podaj liczb� prostok�t�w: ";
  				cin>>n;
 
				if(!(a<b))
				    cout<<"To nie jest przedzia�!";
  				else
		    		cout<<"Pole figury wynosi: "<<fixed<<setprecision(2)<<Pole(a, b, n); 
				Sleep(1000);
				break;
		}
		case 3:
			{
				printf("Podaj poczatek przedzialu calkowania\n");
				scanf("%f", &xp);
 
				printf("Podaj koniec przedzialu calkowania\n");
				scanf("%f", &xk);
 
				printf("Podaj dokladnosc calkowania (w setkach punktow)\n");
				scanf("%d", &n);
				n *= 100;
 
				yp = 0;
				yk = ceil(MAX(f(xp), f(xk)));
 
				pointsIn = 0;
				srand((unsigned)time( NULL ));
 
				for (i=0; i<n; i++) 
					{
						pointsIn += funcIn(randomPoint(xp, xk), randomPoint(yp, yk));
					}
 
				calka = (pointsIn / (double)n) * ((xk-xp) * (yk-yp));
 
				printf("Wartosc calki wynosi w przyblizeniu %f\n", calka);
				Sleep(1000);
				break;
			}
		case 4:
			{
				cout<<"Podaj przedzia� [a, b]\na = ";
				cin>>a;
				cout<<"b = ";
				cin>>b;
				cout<<"Podaj dok�adono��: ";
				cin>>n;
				xp=a;
				xk=b;
				//Prostok�ty
				cout<<"METODA PROSTOK�T�W:"<<endl;
				if(!(a<b))
				    cout<<"To nie jest przedzia�!"<<endl;
  				else
		    		cout<<"Pole figury wynosi: "<<fixed<<setprecision(2)<<Pole(a, b, n)<<endl; 
				//Trapezy
				cout<<"METODA TRAPEZ�W:"<<endl;
				if(!(a<b))
					cout<<"To nie jest przedzia�!"<<endl;
				else
					cout<<"Pole figury wynosi: "<<fixed<<setprecision(2)<<Pole2(a, b, n)<<endl;
				//MONTE CARLO
				cout<<"METODA MONTE CARLO:"<<endl;
				n *= 100;
 
				yp = 0;
				yk = ceil(MAX(f(xp), f(xk)));
 
				pointsIn = 0;
				srand((unsigned)time( NULL ));
 
				for (i=0; i<n; i++) 
					{
						pointsIn += funcIn(randomPoint(xp, xk), randomPoint(yp, yk));
					}
 
				calka = (pointsIn / (double)n) * ((xk-xp) * (yk-yp));
 
				printf("Wartosc calki wynosi w przyblizeniu %f\n", calka);
				
				Sleep(3000);
				break;
			}	
		case 5:
			{
				cout<<"Wychodz�"<<endl;
				exit(0);
				break;
		}
		default:
			cout<<"Nie ma takiej pozycji";
	}
}
return 0;
}

