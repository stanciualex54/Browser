//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "ClasaBaza.h"
#include "Main.h"
#include "Afisare.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
afisare *a;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        exit(0);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if(open->Execute()) 
        String Name = open->FileName;
        a = new afisare();
}
//---------------------------------------------------------------------------

