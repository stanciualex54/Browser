//---------------------------------------------------------------------------


#pragma hdrstop

#include "TagRed.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Red :: Red(){

        string start = "<font color=red>";
        string end = "</font>";
        string text;
        Form1->Edit->SelAttributes->Color = clRed;
        Form1->Edit->Lines->Add(gasire(text, start, end).c_str());
}

