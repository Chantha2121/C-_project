//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Add_Name.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	String text = Edit1->Text;
	ListBox1->Items->Add(text);
	Edit1->Text ="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ListBox1ItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item->Index;
    ListBox1->Items->Delete(index);
}
//---------------------------------------------------------------------------
