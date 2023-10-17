//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TPanel *Panel1;
	TImage *Image1;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label1;
	TButton *Button1;
	TButton *Button2;
	TPanel *Panel2;
	TPanel *Panel3;
	TPageControl *PageControl2;
	TTabSheet *TabSheet4;
	TTabSheet *TabSheet5;
	TTabSheet *TabSheet6;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TEdit *Edit10;
	TEdit *Edit11;
	TEdit *Edit12;
	TButton *Button9;
	TEdit *Edit13;
	TEdit *Edit14;
	TEdit *Edit15;
	TEdit *Edit16;
	TButton *Button10;
	TButton *Button11;
	TPanel *Panel4;
	TPanel *Panel5;
	TButton *Button12;
	TButton *Button13;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TButton *Button14;
	TTabSheet *TabSheet7;
	TPanel *Panel6;
	TPanel *Panel7;
	TDBGrid *DBGrid3;
	TPageControl *PageControl3;
	TTabSheet *TabSheet8;
	TTabSheet *TabSheet9;
	TButton *Button15;
	TButton *Button16;
	TButton *Button17;
	TEdit *Edit17;
	TEdit *Edit18;
	TButton *Button18;
	TButton *Button20;
	TTabSheet *TabSheet10;
	TEdit *Edit19;
	TEdit *Edit20;
	TButton *Button19;
	TButton *Button21;
	TButton *Button22;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Panel5Resize(TObject *Sender);
	void __fastcall Panel3Resize(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Edit12KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Edit5KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Button17Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button18Click(TObject *Sender);
	void __fastcall Button20Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);
	void __fastcall Button22Click(TObject *Sender);
	void __fastcall Button19Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
