//---------------------------------------------------------------------------

#ifndef InterfataH
#define InterfataH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>

#include "Piese.h"
#include <System.Win.ScktComp.hpp>

//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TImage *imgTable;
	TImage *imgTuraA1;
	TImage *imgCalA1;
	TImage *imgNebunA1;
	TImage *imgReginaA;
	TImage *imgPionA1;
	TImage *imgPionA3;
	TImage *imgTuraA2;
	TImage *imgCalA2;
	TImage *imgNebunA2;
	TImage *imgRegeA;
	TImage *imgPionA2;
	TImage *imgPionA4;
	TImage *imgPionA6;
	TImage *imgPionA8;
	TImage *imgPionA5;
	TImage *imgPionA7;
	TImage *imgTuraN1;
	TImage *imgCalN1;
	TImage *imgNebunN1;
	TImage *imgReginaN;
	TImage *imgPionN1;
	TImage *imgPionN3;
	TImage *imgTuraN2;
	TImage *imgCalN2;
	TImage *imgNebunN2;
	TImage *imgRegeN;
	TImage *imgPionN2;
	TImage *imgPionN4;
	TImage *imgPionN6;
	TImage *imgPionN8;
	TImage *imgPionN5;
	TImage *imgPionN7;
	TMemo *Memo1;
	TButton *btnStart;
	TButton *btnMuta;
	TServerSocket *ServerSocket;
	TButton *btnTrimite;
	void __fastcall btnStartClick(TObject *Sender);
	void __fastcall btnMutaClick(TObject *Sender);
	void __fastcall ServerSocketClientRead(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall btnTrimiteClick(TObject *Sender);

private:	// User declarations
public:		// User declarations

	 Piese *Tabla[36];

	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
