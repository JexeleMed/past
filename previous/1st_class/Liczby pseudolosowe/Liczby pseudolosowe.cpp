// Jakub Majer 1F
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
int tab1[18]={};//deklaracja tablicy
int a=0;
srand( time( NULL ) );
for(int d=0;d<18;d++)
{
        a=(rand()%121)+4; //wype�nienie tablicy 
        cout<< "Wylosowano: "<<a<<endl; //wy�wietlenie zawarto�ci
        tab1[d]=a;
}
}


