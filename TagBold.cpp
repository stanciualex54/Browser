//---------------------------------------------------------------------------


#pragma hdrstop

#include "TagBold.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Bold :: Bold(){

        string start = "<b>";
        string end = "</b>";
        string text;
        Form1->Edit->SelAttributes->Style = TFontStyles() << fsBold;
        Form1->Edit->Lines->Add(gasire(text, start, end).c_str());
        
        
}

