//Jakub Majer 2F
#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"Podaj liczby:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	
	if(a<b and b<c)
		{
			cout<<"Liczby s� w kolejno�ci rosn�cej";
		}
	else
	{
		cout<<"Liczby nie s� w kolejno�ci rosn�cej";
	}
	return 0;
}
