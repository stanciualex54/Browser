//---------------------------------------------------------------------------


#pragma hdrstop

#include "TagItalic.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Italic :: Italic(){

        string start = "<i>";
        string end = "</i>";
        string text;
        Form1->Edit->SelAttributes->Style = TFontStyles() << fsItalic;
        Form1->Edit->Lines->Add(gasire(text, start, end).c_str());

}