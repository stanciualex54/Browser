//---------------------------------------------------------------------------


#pragma hdrstop

#include "TagTitlu.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Titlu :: Titlu(){

        string start = "<title>";
        string end = "</title>";
        string text;
        Form1->Caption = gasire(text, start, end).c_str();
}
