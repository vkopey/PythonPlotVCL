//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Chart.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm  // клас вікна
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1; // головне меню
        TPopupMenu *PopupMenu1; // контекстне меню
        TLabel *Label1; // надпис
        TEdit *Edit1; // поле вводу
        TMemo *Memo1; // багаторядкове поле вводу
        TButton *Button1; // кнопка
        TCheckBox *CheckBox1; // прапорець
        TListBox *ListBox1; // список
        TScrollBar *ScrollBar1; // смуга прокручування
        TGroupBox *GroupBox1; // контейнер
        TRadioButton *RadioButton1; // перемикач
        TRadioButton *RadioButton2; // перемикач
        TRadioButton *RadioButton3; // перемикач
        TChart *Chart1; // діаграма
        TOpenDialog *OpenDialog1; // діалогове вікно
        TSaveDialog *SaveDialog1; // діалогове вікно
        TMenuItem *File1; // пункт меню
        TMenuItem *About1; // пункт меню
        TMenuItem *Open1; // пункт меню
        TMenuItem *Save1; // пункт меню
        TMenuItem *Close1; // пункт меню
        TMenuItem *Save2; // пункт меню
        TMenuItem *Open2; // пункт меню
        TLineSeries *Series1; // ряд діаграми
        TLineSeries *Series2; // ряд діаграми
        TLineSeries *Series3; // ряд діаграми
        // методи класу:
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall ScrollBar1Change(TObject *Sender);
        void __fastcall Save1Click(TObject *Sender);
        void __fastcall Open1Click(TObject *Sender);
        void __fastcall Close1Click(TObject *Sender);
        void __fastcall About1Click(TObject *Sender);
        void __fastcall ListBox1Click(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall Save2Click(TObject *Sender);
        void __fastcall Open2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner); // конструктор
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
