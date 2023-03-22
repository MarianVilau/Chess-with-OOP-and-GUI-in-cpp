//---------------------------------------------------------------------------

#pragma hdrstop

#include "Piese.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Piese::Piese()
{
	Piesa=nullptr;
    Culoare=NULL;
}
Piese::~Piese()
{
    delete Piesa;
}

Piese::Piese(TImage *PiesaData,char C)
{
		Piesa=PiesaData;
		Culoare=C;
}

TImage* Piese::getPiesa()
{
	return Piesa;
}

void Piese::Pozitie(int X,int Y)
{
	Piesa->Left=X;
	Piesa->Top=Y;
}

void Piese::setX(int X)
{
	Xp=X;
}

void Piese::setY(int Y)
{
	Yp=Y;
}

char Piese::getCuloare()
{
	return Culoare;
}

void Piese::AnalizaMutare(Piese p, String s, int *l1, int *l2, int *c1, int *c2)
{
	int i=1;
	while(i<=s.Length())
	{
		switch(i)
		{
			case 1: *c1=Coloana(s[i]);
					break;
			case 2: *l1=8- StrToInt(s[i]);
					break;
			case 3: *c2=Coloana(s[i]);
					break;
			case 4: *l2=8- StrToInt(s[i]);
					break;
		}
		i++;
	}
	*l1=80+*l1*48;
	*c1=230+*c1*48;

	*l2=80+*l2*48;
	*c2=230+*c2*48;
}


int Piese::Cautare(Piese *T[32],int keyX, int keyY)
{
	for(int i=0;i<32;i++)
	   if(T[i]->Xp==keyX && T[i]->Yp==keyY) return i;
    return -1;
}

int Piese::Coloana(char ch)
{
	 switch(ch)
			{
				case 'A': return 0;
				case 'B': return 1;
				case 'C': return 2;
				case 'D': return 3;
				case 'E': return 4;
				case 'F': return 5;
				case 'G': return 6;
				case 'H': return 7;
			}
	return -1;
}

void Piese::Captura(Piese *p)
{
	if(Culoare=='N')
	{
		Xp=672;
		Yp=416;
	}
	else
	{
		Xp=59;
		Yp=80;
	}

	Pozitie(Xp,Yp);
}

//------------------------------------------------------------------------------

Tura::Tura(TImage* img,int X,int Y,char C):Piese(img,C)
{
   Initializare(X,Y);
}

void Tura::Initializare(int X,int Y)
{
   Xp=X;
   Yp=Y;

   Pozitie(Xp,Yp);
}
 /*
bool Tura::ValidareMutare(int l1, int l2, int c1, int c2)
{
	return(l1==l2 || c1==c2);
} */

//------------------------------------------------------------------------------

Cal::Cal(TImage* img,int X,int Y,char C):Piese(img,C)
{
   Initializare(X,Y);
}

void Cal::Initializare(int X,int Y)
{
   Xp=X;
   Yp=Y;

   Pozitie(Xp,Yp);
}
 /*
bool Cal::ValidareMutare(int l1, int l2, int c1, int c2)
{
	int coldif=abs(c2-c1);
	int lindif=abs(l2-l1);
	return (coldif==2 && lindif==1)||(coldif==1 && lindif==2);
} */

//------------------------------------------------------------------------------

Nebun::Nebun(TImage* img,int X,int Y,char C):Piese(img,C)
{
   Initializare(X,Y);
}

void Nebun::Initializare(int X,int Y)
{
   Xp=X;
   Yp=Y;

   Pozitie(Xp,Yp);
}
  /*
bool Nebun::ValidareMutare(int l1, int l2, int c1, int c2)
{
   int coldif=abs(c2-c1);
   int lindif=abs(l2-l1);
   return (coldif==lindif);
}   */

//------------------------------------------------------------------------------

Regina::Regina(TImage* img,int X,int Y,char C):Piese(img,C)
{
   Initializare(X,Y);
}


void Regina::Initializare(int X,int Y)
{
   Xp=X;
   Yp=Y;

  Pozitie(Xp,Yp);
}
 /*
bool Regina::ValidareMutare(int l1, int l2, int c1, int c2)
{
   int coldif=abs(c2-c1);
   int lindif=abs(l2-l1);
   return (l1==l2 || c1==c2 || coldif==lindif);
}  */

//------------------------------------------------------------------------------

Rege::Rege(TImage* img,int X,int Y,char C):Piese(img,C)
{
   Initializare(X,Y);
}

void Rege::Initializare(int X,int Y)
{
   Xp=X;
   Yp=Y;

   Pozitie(Xp,Yp);
}
/*
bool Rege::ValidareMutare(int l1, int l2, int c1, int c2)
{
   int coldif=abs(c2-c1);
   int lindif=abs(l2-l1);

   return (coldif<=1 && lindif<=1);
}*/

//------------------------------------------------------------------------------

 Pion::Pion(TImage* img,int X,int Y,char C):Piese(img,C)
{
   Initializare(X,Y);
}

void Pion::Initializare(int X,int Y)
{
   Xp=X;
   Yp=Y;

   Pozitie(Xp,Yp);
}
/*
bool Pion::ValidareMutare(int l1, int l2, int c1, int c2)
{
	int lindif=abs(l2-l1);
	if(Culoare=='A')
	{
		if(lindif==1)   					return (c1==c2);
		else if(lindif==2 && l1==1) 		return (c1==c2);
		else if(lindif==1 && abs(c1-c2)==1) return true;
									   else return false;
	}
	if(Culoare=='N')
	{
	   if(lindif==-1)   					return (c1==c2);
		else if(lindif==-2 && l1==6) 		return (c1==c2);
		else if(lindif==-1 && abs(c1-c2)==1) return true;
									   else return false;
	}
	return false;
} */


