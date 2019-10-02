//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1; // вікно
TLineSeries *Series0; // поточний ряд для графіка
TColor color=clRed; // поточний колір лінії

//---------------------------------------------------------------------------
// конструктор класу
// викликається першим, виконує підготовчі дії
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Edit1->Text=1; // значення у полі вводу
Memo1->WordWrap=False; // заборонити перенесення рядка
Series0=Series1; // поточний ряд
Series0->Clear(); // очистити ряд
SaveDialog1->FileName = "*.py"; // розширення файлів в діалоговому вікні
OpenDialog1->FileName = "*.py";
}

//---------------------------------------------------------------------------
// натиснута кнопка Button1
// будує графік шляхом виконання Python-коду 
void __fastcall TForm1::Button1Click(TObject *Sender)
{
float scale=Edit1->Text.ToDouble(); // масштаб
int sign=!CheckBox1->Checked; // значення прапорця
sign=sign*2-1; // знак перед функцією: -1 або 1
String code = "from math import *\n\
fx=open('xdata.txt', 'w')\n\
fy=open('ydata.txt', 'w')\n\
for x in X:\n\
    y=f(x)\n\
    fx.write(str(x)+'\\n')\n\
    fy.write(str(y)+'\\n')\n\
fx.close()\n\
fy.close()";  // рядок з кодом Python

TStringList *s=new TStringList; // список рядків
s->AddStrings(Memo1->Lines); // додати рядки з Memo1
s->Add(code); // додати  код Python
s->SaveToFile("my.py"); // зберегти у файл
system("c:/python27/python.exe my.py"); // виконати Python-програму

TStringList *x=new TStringList; // список рядків для значень X
TStringList *y=new TStringList; //               для значень Y
x->LoadFromFile("xdata.txt"); // завантажити з файлу
y->LoadFromFile("ydata.txt");
Series0->Clear(); // очистити
for (int i=0; i < x->Count; i++) // для кожного значення X
 {
 //додати точку кривої X,Y на графік
 Series0->AddXY(atof(x->Strings[i].c_str()),
                scale*sign*atof(y->Strings[i].c_str()),"",color);
 }
}

//---------------------------------------------------------------------------
// змінено значення ScrollBar1
// установлює значення масштабу
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
Edit1->Text=ScrollBar1->Position/10.0; // вивести значення у  Edit1
}

//---------------------------------------------------------------------------
// натиснуто меню Save
// зберігає Python-код у файл
void __fastcall TForm1::Save1Click(TObject *Sender)
{
if (SaveDialog1->Execute())
Memo1->Lines->SaveToFile(SaveDialog1->FileName); // зберегти рядки у файл
}

//---------------------------------------------------------------------------
// натиснуто меню Open
// завантажує Python-код з файлу
void __fastcall TForm1::Open1Click(TObject *Sender)
{
if (OpenDialog1->Execute())
Memo1->Lines->LoadFromFile(OpenDialog1->FileName); // завантажити рядки з файлу
}

//---------------------------------------------------------------------------
// натиснуто меню Close
// закриває програму
void __fastcall TForm1::Close1Click(TObject *Sender)
{
Close(); // закрити вікно
}

//---------------------------------------------------------------------------
// натиснуто меню About
// показує вікно про програму
void __fastcall TForm1::About1Click(TObject *Sender)
{
// вивести вікно про програму
Application->MessageBoxA("PythonPlot v0.1\nАвтор: Копей В.Б.","Про програму",0);
}

//---------------------------------------------------------------------------
// натиснуто на ListBox1
// установлює поточний ряд діаграми
void __fastcall TForm1::ListBox1Click(TObject *Sender)
{
int i=ListBox1->ItemIndex; // індекс вибраного елемента
switch (i)
{
case 0:Series0=Series1;break; // якщо i=0 то поточний ряд Series1
case 1:Series0=Series2;break; // якщо i=1 то поточний ряд Series2
case 2:Series0=Series3;break;
default: Series0=Series1; // інакше поточний ряд Series1
}
}

//---------------------------------------------------------------------------
// натиснуто RadioButton1
// установлює червоний колір
void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
color=clRed; // установити червоний колір лінії
}

//---------------------------------------------------------------------------
// натиснуто RadioButton2
// установлює зелений колір
void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
 color=clGreen;
}

//---------------------------------------------------------------------------
// натиснуто RadioButton3
// установлює синій колір
void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
color=clBlue;
}

//---------------------------------------------------------------------------
// натиснуто меню Save2
// зберігає Python-код у файл
void __fastcall TForm1::Save2Click(TObject *Sender)
{
 Save1Click(Sender); // зберегти
}

//---------------------------------------------------------------------------
// натиснуто меню Open2
// завантажує Python-код з файлу
void __fastcall TForm1::Open2Click(TObject *Sender)
{
 Open1Click(Sender); // відкрити
}
//---------------------------------------------------------------------------
