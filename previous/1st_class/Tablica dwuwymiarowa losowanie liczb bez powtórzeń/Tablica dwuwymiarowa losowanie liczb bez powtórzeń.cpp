//Jakub Majer 1F
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector> // u�y�em biblioteki vektor�w, poniewa� jest ona bardziej przejrzysta je�li chodzi o modyfikowanie tablic

using namespace std;

bool powtarzalne(vector< vector<int> > tab, int m, int n, int number) // powtarzalno��
{
    for(int i=0;i<tab.size();i++)
    {
        for(int j=0;j<tab[0].size();j++)
        {
            if(i==m and j==n)return false;
            if(tab[i][j]==number)return true;
        }
    }
}

int main()
{
    srand(time(0)); // inicjacja generatora
    vector< vector<int> >tab(10,vector<int>(11)); // wielko�� tablicy
    int losuj=rand()%(tab.size()*tab[0].size())+1;// losowanie elementu
    for(int i=0;i<tab.size();i++)
    {
        for(int j=0;j<tab[0].size();j++)
        {
            while(powtarzalne(tab,i,j,losuj))losuj=rand()%(tab.size()*tab[0].size())+1; // nadpisuje powtarzalne fragmenty tablicy oraz j� powi�ksza
            tab[i][j]=losuj;
            cout << tab[i][j] << "\t ";// wy�wietla na standardowym wyj�ciu
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
