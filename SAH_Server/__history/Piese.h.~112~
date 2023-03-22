//---------------------------------------------------------------------------

#ifndef PieseH
#define PieseH
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------

class Piese
{
protected:
	int Xp;
	int Yp;
	char Culoare;
	TImage *Piesa;
	virtual void Initializare(int X, int Y){};
public:


	TImage* getPiesa();
    char getCuloare();
	void setX(int X);
	void setY(int Y);
	void Pozitie(int X, int Y);

	int Cautare(Piese *T[32],int keyX, int keyY);
	void AnalizaMutare(Piese p, String s, int *l1, int *l2, int *c1, int *c2);
	//virtual bool ValidareMutare(int l1, int l2, int c1, int c2){ return false;}
	void Captura(Piese *p);
	int Coloana(char ch);


	Piese();
	Piese(TImage *PiesaData,char C);
	~Piese();

};

 class Tura: public Piese
 {

	public:
	  Tura(TImage* img,int X, int Y,char C);
	//  bool ValidareMutare(int l1, int l2, int c1, int c2);
	protected:
	  void Initializare(int X, int Y);
 };

 class Cal: public Piese
 {

	public:
	  Cal(TImage* img,int X, int Y,char C);
	//  bool ValidareMutare(int l1, int l2, int c1, int c2);
	protected:
	  void Initializare(int X, int Y);
 };

 class Nebun: public Piese
 {

	public:
	  Nebun(TImage* img,int X, int Y,char C);
	//  bool ValidareMutare(int l1, int l2, int c1, int c2);
	protected:
	  void Initializare(int X, int Y);
 };

 class Regina: public Piese
 {

	public:
	  Regina(TImage* img,int X, int Y,char C);
	//  bool ValidareMutare(int l1, int l2, int c1, int c2);
	protected:
	  void Initializare(int X, int Y);
 };

 class Rege: public Piese
 {

	public:
	  Rege(TImage* img,int X, int Y,char C);
	 // bool ValidareMutare(int l1, int l2, int c1, int c2);
	protected:
	  void Initializare(int X, int Y);
 };

  class Pion: public Piese
 {

	public:
	  Pion(TImage* img,int X, int Y,char C);
	  //bool ValidareMutare(int l1, int l2, int c1, int c2);
	protected:
	  void Initializare(int X, int Y);
 };

#endif
//
