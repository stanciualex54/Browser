//---------------------------------------------------------------------------


#pragma hdrstop

#include "TagBody.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
Body :: Body(){

        Form1->Edit->Clear();
        string start = "<body>";
        string end = "</body>";
        string text;
        Form1->Edit->Paragraph->Alignment=taLeftJustify;
}
