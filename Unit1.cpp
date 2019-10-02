//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1; // ����
TLineSeries *Series0; // �������� ��� ��� �������
TColor color=clRed; // �������� ���� ��

//---------------------------------------------------------------------------
// ����������� �����
// ����������� ������, ������ ��������� 䳿
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Edit1->Text=1; // �������� � ��� �����
Memo1->WordWrap=False; // ���������� ����������� �����
Series0=Series1; // �������� ���
Series0->Clear(); // �������� ���
SaveDialog1->FileName = "*.py"; // ���������� ����� � ���������� ���
OpenDialog1->FileName = "*.py";
}

//---------------------------------------------------------------------------
// ��������� ������ Button1
// ���� ������ ������ ��������� Python-���� 
void __fastcall TForm1::Button1Click(TObject *Sender)
{
float scale=Edit1->Text.ToDouble(); // �������
int sign=!CheckBox1->Checked; // �������� ��������
sign=sign*2-1; // ���� ����� ��������: -1 ��� 1
String code = "from math import *\n\
fx=open('xdata.txt', 'w')\n\
fy=open('ydata.txt', 'w')\n\
for x in X:\n\
    y=f(x)\n\
    fx.write(str(x)+'\\n')\n\
    fy.write(str(y)+'\\n')\n\
fx.close()\n\
fy.close()";  // ����� � ����� Python

TStringList *s=new TStringList; // ������ �����
s->AddStrings(Memo1->Lines); // ������ ����� � Memo1
s->Add(code); // ������  ��� Python
s->SaveToFile("my.py"); // �������� � ����
system("c:/python27/python.exe my.py"); // �������� Python-��������

TStringList *x=new TStringList; // ������ ����� ��� ������� X
TStringList *y=new TStringList; //               ��� ������� Y
x->LoadFromFile("xdata.txt"); // ����������� � �����
y->LoadFromFile("ydata.txt");
Series0->Clear(); // ��������
for (int i=0; i < x->Count; i++) // ��� ������� �������� X
 {
 //������ ����� ����� X,Y �� ������
 Series0->AddXY(atof(x->Strings[i].c_str()),
                scale*sign*atof(y->Strings[i].c_str()),"",color);
 }
}

//---------------------------------------------------------------------------
// ������ �������� ScrollBar1
// ���������� �������� ��������
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
Edit1->Text=ScrollBar1->Position/10.0; // ������� �������� �  Edit1
}

//---------------------------------------------------------------------------
// ��������� ���� Save
// ������ Python-��� � ����
void __fastcall TForm1::Save1Click(TObject *Sender)
{
if (SaveDialog1->Execute())
Memo1->Lines->SaveToFile(SaveDialog1->FileName); // �������� ����� � ����
}

//---------------------------------------------------------------------------
// ��������� ���� Open
// ��������� Python-��� � �����
void __fastcall TForm1::Open1Click(TObject *Sender)
{
if (OpenDialog1->Execute())
Memo1->Lines->LoadFromFile(OpenDialog1->FileName); // ����������� ����� � �����
}

//---------------------------------------------------------------------------
// ��������� ���� Close
// ������� ��������
void __fastcall TForm1::Close1Click(TObject *Sender)
{
Close(); // ������� ����
}

//---------------------------------------------------------------------------
// ��������� ���� About
// ������ ���� ��� ��������
void __fastcall TForm1::About1Click(TObject *Sender)
{
// ������� ���� ��� ��������
Application->MessageBoxA("PythonPlot v0.1\n�����: ����� �.�.","��� ��������",0);
}

//---------------------------------------------------------------------------
// ��������� �� ListBox1
// ���������� �������� ��� �������
void __fastcall TForm1::ListBox1Click(TObject *Sender)
{
int i=ListBox1->ItemIndex; // ������ ��������� ��������
switch (i)
{
case 0:Series0=Series1;break; // ���� i=0 �� �������� ��� Series1
case 1:Series0=Series2;break; // ���� i=1 �� �������� ��� Series2
case 2:Series0=Series3;break;
default: Series0=Series1; // ������ �������� ��� Series1
}
}

//---------------------------------------------------------------------------
// ��������� RadioButton1
// ���������� �������� ����
void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
color=clRed; // ���������� �������� ���� ��
}

//---------------------------------------------------------------------------
// ��������� RadioButton2
// ���������� ������� ����
void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
 color=clGreen;
}

//---------------------------------------------------------------------------
// ��������� RadioButton3
// ���������� ���� ����
void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
color=clBlue;
}

//---------------------------------------------------------------------------
// ��������� ���� Save2
// ������ Python-��� � ����
void __fastcall TForm1::Save2Click(TObject *Sender)
{
 Save1Click(Sender); // ��������
}

//---------------------------------------------------------------------------
// ��������� ���� Open2
// ��������� Python-��� � �����
void __fastcall TForm1::Open2Click(TObject *Sender)
{
 Open1Click(Sender); // �������
}
//---------------------------------------------------------------------------
