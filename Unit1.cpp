//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int GRUPA_ID;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)     // login
{



	if ( ( Edit1->Text=="1") && (Edit2->Text=="1") ) {

        DataModule2->FDQuery2->Close();
		DataModule2->FDQuery2->Open();

		TabSheet1->TabVisible=false;
		TabSheet2->TabVisible=true;


	}
	else
	{
		MessageDlg("Autentificare Esuata", mtError, TMsgDlgButtons() << mbOK , NULL );
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormShow(TObject *Sender)
{
		TabSheet2->TabVisible=false;
		TabSheet3->TabVisible=false;
        TabSheet7->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel5Resize(TObject *Sender)
{
	int w = Panel5->Width;

	int a = DBGrid1->Columns->Items[0]->Width;
	int b = DBGrid1->Columns->Items[1]->Width;
	int c = DBGrid1->Columns->Items[2]->Width;

	int r = a+b+c;

	 DBGrid1->Columns->Items[3]->Width = w-r;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel3Resize(TObject *Sender)
{
	int w1 = Panel3->Width;

	int a1 = DBGrid2->Columns->Items[0]->Width;
	int b1 = DBGrid2->Columns->Items[1]->Width;
	int c1 = DBGrid2->Columns->Items[2]->Width;
	int d = DBGrid2->Columns->Items[3]->Width;
	int e = DBGrid2->Columns->Items[4]->Width;
	int f = DBGrid2->Columns->Items[5]->Width;
	int g = DBGrid2->Columns->Items[6]->Width;
	int h = DBGrid2->Columns->Items[7]->Width;

	int r1 = a1+b1+c1+e+f+d+g+h;

	 DBGrid2->Columns->Items[8]->Width = w1-r1;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button8Click(TObject *Sender)
{
		DataModule2->FDQuery1->Close();
		DataModule2->FDQuery1->Open();

		TabSheet2->TabVisible=false;
		TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
		Edit5->Text = DataModule2->FDQuery1->FieldByName("NUME")->AsString;

		Edit12->Text = DataModule2->FDQuery1->FieldByName("NUME")->AsString;

		GRUPA_ID = DataModule2->FDQuery1->FieldByName("GRUPA_ID")->AsInteger;

		TabSheet3->TabVisible=false;
		TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
if ((Edit3->Text!="")&&(Edit4->Text!="")&& (Edit5->Text!="")&&(Edit6->Text!="") &&(Edit7->Text!="")&&(Edit8->Text!="") && (Edit9->Text!="")) {

			DataModule2->INSSTUDENT->Close();

		DataModule2->INSSTUDENT->ParamByName("NUME")->AsString =  Edit3->Text;
		DataModule2->INSSTUDENT->ParamByName("PRENUME")->AsString = Edit4->Text;
		DataModule2->INSSTUDENT->ParamByName("GRUPA_ID")->AsInteger = GRUPA_ID;
		DataModule2->INSSTUDENT->ParamByName("DATA_NASTERII")->AsDate = Edit6->Text;
		DataModule2->INSSTUDENT->ParamByName("GEN")->AsString = Edit7->Text;
		DataModule2->INSSTUDENT->ParamByName("IDNP")->AsString = Edit8->Text;
		DataModule2->INSSTUDENT->ParamByName("TELEFON")->AsString = Edit9->Text;

		 DataModule2->INSSTUDENT->ExecSQL();

		DataModule2->FDQuery2->Close();
		DataModule2->FDQuery2->Open();

		Edit3->Text="";
		Edit4->Text="";
		Edit5->Text="";
		Edit6->Text="";
		Edit7->Text="";
		Edit8->Text="";
		Edit9->Text="";

		TabSheet5->TabVisible=false;
		TabSheet4->TabVisible=true;   // main

		MessageDlg(" Inserare cu Succes ", mtInformation, TMsgDlgButtons() << mbOK , NULL );
}
else
{
   MessageDlg(" nu sunt introduse toate campurile ! ", mtError, TMsgDlgButtons() << mbOK , NULL );
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	if ( !DataModule2->FDQuery2->IsEmpty()) {

		 Edit10->Text=DataModule2->FDQuery2->FieldByName("nume")->AsString;
		 Edit11->Text=DataModule2->FDQuery2->FieldByName("prenume")->AsString;
		 Edit12->Text=DataModule2->FDQuery2->FieldByName("nume_1")->AsString;
		 Edit13->Text=DataModule2->FDQuery2->FieldByName("DATA_NASTERII")->AsString;
		 Edit14->Text=DataModule2->FDQuery2->FieldByName("GEN")->AsString;
		 Edit15->Text=DataModule2->FDQuery2->FieldByName("idnp")->AsString;
		 Edit16->Text=DataModule2->FDQuery2->FieldByName("telefon")->AsString;

		 GRUPA_ID =  DataModule2->FDQuery2->FieldByName("GRUPA_ID")->AsInteger;



		TabSheet6->TabVisible=true;
			TabSheet4->TabVisible=false;
				TabSheet5->TabVisible=false;
	   }
	   else
	   {
		   MessageDlg(" nu sunt date de afisat ! ", mtError, TMsgDlgButtons() << mbOK , NULL );
	   }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit12KeyPress(TObject *Sender, System::WideChar &Key)
{
   Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
if ((Edit10->Text!="")&&(Edit11->Text!="")&& (Edit12->Text!="")&&(Edit13->Text!="") &&(Edit13->Text!="")&&(Edit14->Text!="") && (Edit15->Text!="")) {

		DataModule2->UPDSTUDENT->Close();

		DataModule2->UPDSTUDENT->ParamByName("NUME")->AsString =  Edit10->Text;
		DataModule2->UPDSTUDENT->ParamByName("PRENUME")->AsString = Edit11->Text;
		DataModule2->UPDSTUDENT->ParamByName("GRUPA_ID")->AsInteger = GRUPA_ID;
		DataModule2->UPDSTUDENT->ParamByName("DATA_NASTERII")->AsDate = Edit13->Text;
		DataModule2->UPDSTUDENT->ParamByName("GEN")->AsString = Edit14->Text;
		DataModule2->UPDSTUDENT->ParamByName("IDNP")->AsString = Edit15->Text;
		DataModule2->UPDSTUDENT->ParamByName("TELEFON")->AsString = Edit16->Text;
		DataModule2->UPDSTUDENT->ParamByName("STUDENT_ID")->AsInteger = DataModule2->FDQuery2->FieldByName("STUDENT_ID")->AsInteger;

		DataModule2->UPDSTUDENT->ExecSQL();

		DataModule2->FDQuery2->Close();
		DataModule2->FDQuery2->Open();

		Edit11->Text="";
		Edit12->Text="";
		Edit13->Text="";
		Edit14->Text="";
		Edit15->Text="";
		Edit16->Text="";
		Edit10->Text="";

		TabSheet6->TabVisible=false;
		TabSheet4->TabVisible=true;   // main

		MessageDlg(" Editare cu Succes ", mtInformation, TMsgDlgButtons() << mbOK , NULL );
}
else
{
   MessageDlg(" nu sunt introduse toate campurile ! ", mtError, TMsgDlgButtons() << mbOK , NULL );
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
		TabSheet6->TabVisible=false;
		TabSheet4->TabVisible=true;   // main
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
		Edit3->Text="";
		Edit4->Text="";
		Edit5->Text="";
		Edit6->Text="";
		Edit7->Text="";
		Edit8->Text="";
		Edit9->Text="";

		TabSheet5->TabVisible=false;
		TabSheet4->TabVisible=true;   // main
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{

		TabSheet5->TabVisible=true;
			TabSheet4->TabVisible=false;
				TabSheet6->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
try
	{
	   if (!DataModule2->FDQuery2->IsEmpty()) {

	  if(    MessageDlg(" Sunteti sigur ? ", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo , 0 ) == mrYes )
	  {
			DataModule2->DELETESTUDENT->Close();

			DataModule2->DELETESTUDENT->ParamByName("STUDENT_ID")->AsInteger =  DataModule2->FDQuery2->FieldByName("STUDENT_ID")->AsInteger;

			DataModule2->DELETESTUDENT->ExecSQL();

			DataModule2->FDQuery2->Close();
			DataModule2->FDQuery2->Open();



			MessageDlg(" Eliminare cu succes ! ", mtInformation, TMsgDlgButtons() << mbOK , NULL );
	  }

	   }
	   else
	   {
		   ShowMessage("nu sunt date de eilimnat");
	   }

	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Edit5KeyPress(TObject *Sender, System::WideChar &Key)
{
 Key =0;
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


void __fastcall TForm1::Button13Click(TObject *Sender)
{
       TabSheet3->TabVisible=false;
		TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Edit1->Clear();
    Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{

			DataModule2->FDQuery1->Close();
			DataModule2->FDQuery1->Open();

	TabSheet2->TabVisible=false;
	TabSheet7->TabVisible=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{
	TabSheet2->TabVisible=true;
	TabSheet7->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{

		 TabSheet8->TabVisible=false;
		 TabSheet9->TabVisible=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{

	if ((Edit17->Text!="")&&(Edit18->Text!="") ){

		DataModule2->INSGRUP->Close();

		DataModule2->INSGRUP->ParamByName("NUME")->AsString =  Edit17->Text;
		DataModule2->INSGRUP->ParamByName("ANUL_FORMARE")->AsString = Edit18->Text;

		DataModule2->INSGRUP->ExecSQL();

		DataModule2->FDQuery1->Close();
		DataModule2->FDQuery1->Open();

		Edit17->Text="";
		Edit18->Text="";

		TabSheet9->TabVisible=false;
		TabSheet8->TabVisible=true;   // main

		MessageDlg(" Inserare cu Succes ", mtInformation, TMsgDlgButtons() << mbOK , NULL );


	}
	else
	{
	   MessageDlg(" nu sunt introduse toate campurile ! ", mtError, TMsgDlgButtons() << mbOK , NULL );
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{       TabSheet10->TabVisible=false;
		TabSheet9->TabVisible=false;
		TabSheet8->TabVisible=true;   // main
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
try
	{
	   if (!DataModule2->FDQuery1->IsEmpty()) {

	  if(    MessageDlg(" Sunteti sigur ? ", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo , 0 ) == mrYes )
	  {
			DataModule2->DELETEGRUP->Close();

			DataModule2->DELETEGRUP->ParamByName("GRUPA_ID")->AsInteger =  DataModule2->FDQuery1->FieldByName("GRUPA_ID")->AsInteger;

			DataModule2->DELETEGRUP->ExecSQL();

			DataModule2->FDQuery1->Close();
			DataModule2->FDQuery1->Open();



			MessageDlg(" Eliminare cu succes ! ", mtInformation, TMsgDlgButtons() << mbOK , NULL );
	  }

	   }
	   else
	   {
		   ShowMessage("nu sunt date de eilimnat");
	   }

	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button22Click(TObject *Sender)
{
if ( !DataModule2->FDQuery1->IsEmpty()) {

		 Edit19->Text=DataModule2->FDQuery1->FieldByName("nume")->AsString;
		 Edit20->Text=DataModule2->FDQuery1->FieldByName("ANUL_FORMARE")->AsString;

		TabSheet10->TabVisible=true;
			TabSheet9->TabVisible=false;
				TabSheet8->TabVisible=false;
	   }
	   else
	   {
		   MessageDlg(" nu sunt date de afisat ! ", mtError, TMsgDlgButtons() << mbOK , NULL );
	   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{
if ((Edit19->Text!="")&&(Edit20->Text!="")) {

		DataModule2->UPDGRUP->Close();

		DataModule2->UPDGRUP->ParamByName("NUME")->AsString =  Edit19->Text;
		DataModule2->UPDGRUP->ParamByName("ANUL_FORMARE")->AsString = Edit20->Text;

			DataModule2->UPDGRUP->ParamByName("GRUPA_ID")->AsInteger = DataModule2->FDQuery1->FieldByName("GRUPA_ID")->AsInteger;
		DataModule2->UPDGRUP->ExecSQL();

		DataModule2->FDQuery1->Close();
		DataModule2->FDQuery1->Open();

		Edit19->Text="";
		Edit20->Text="";


		TabSheet10->TabVisible=false;
		TabSheet8->TabVisible=true;   // main

		MessageDlg(" Editare cu Succes ", mtInformation, TMsgDlgButtons() << mbOK , NULL );
}
else
{
   MessageDlg(" nu sunt introduse toate campurile ! ", mtError, TMsgDlgButtons() << mbOK , NULL );
}
}
//---------------------------------------------------------------------------

