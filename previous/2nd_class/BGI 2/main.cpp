//Jakub Majer 2F
#include<math.h>
#include"graphics.h"

const int SZEROKOSC=600, WYSOKOSC=600 ;

void drawLine(int moveToX, int moveToY, int drawX, int drawY, int color, int textX, int textY, char*name)
{
	moveto(moveToX, moveToY);
	setcolor(color);
	lineto(drawX, drawY);
	outtextxy(textX, textY, name);
}

int main()
{
	double x,y=0;
	initwindow(SZEROKOSC, WYSOKOSC);
	moveto(SZEROKOSC/2,WYSOKOSC/2); // przesuni�cie kursora do �rodka 
	float podzialka=20;  // zwi�kszenie podzia�ki 
	
	
//funkcja	
	for (x=0;x<SZEROKOSC; x++)
	{
		y=(2*x)+3;  // nasza funkcja w przedziale od miejsca przeci�cia osi X z osi� Y do ko�ca uk�adu wsp�rz�dnych
		setcolor(YELLOW);
		x=x*podzialka;  // zwi�kszenie podzia�ki
		y=y*podzialka;  // zwi�kszenie podzia�ki
		lineto(SZEROKOSC/2 + x, WYSOKOSC/2 - y);
	}
	
	for (x=0;x<SZEROKOSC; x++)
	{
		y=2*x-3;  // nasza funkcja w przedziale od 0 do miejsca przeci�cie osi X z osi� Y
		setcolor(YELLOW);
		x=x*podzialka;   // zwi�kszenie podzia�ki
		y=y*podzialka;   // zwi�kszenie podzia�ki
		lineto(SZEROKOSC/2 - x, WYSOKOSC/2 + y);
	}
	
	
// osie X i Y
	drawLine(0, WYSOKOSC/2, SZEROKOSC, WYSOKOSC/2, WHITE,  SZEROKOSC-20, WYSOKOSC/2 + 10, "X");
	drawLine(SZEROKOSC/2, 0, SZEROKOSC/2, WYSOKOSC,WHITE, SZEROKOSC/2+10,0,"Y");
	
	
	// podzia�ka osi X
	for(int k=300;k<SZEROKOSC;k++)
	{
		for(int l=290;l<310;l++)
		{
			line(k,l,k,l+20);
			l+=100;
		}
		k+=50;
	}
	
	for(int k=0;k<SZEROKOSC/2;k++)
	{		for(int l=290;l<310;l++)
		{
			line(k,l,k,l+20);
			l+=100;
		}
		k+=50;
	}
	
	// podzia�ka osi Y
	for(int k=290;k<310;k++)
	{
		for(int l=300;l<WYSOKOSC;l++)
		{
			line(k,l,k+20,l);
			l+=50;
		}
		k+=100;
	}
	
	for(int k=290;k<310;k++)
	{
		for(int l=300;l<WYSOKOSC;l++)
		{
			line(k,l,k+20,l);
			l-=50;
		}
		k-=100;
	}


	
getch();
closegraph();

return 0;
}
