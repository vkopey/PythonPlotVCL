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
class TForm1 : public TForm  // ���� ����
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1; // ������� ����
        TPopupMenu *PopupMenu1; // ���������� ����
        TLabel *Label1; // ������
        TEdit *Edit1; // ���� �����
        TMemo *Memo1; // ������������� ���� �����
        TButton *Button1; // ������
        TCheckBox *CheckBox1; // ���������
        TListBox *ListBox1; // ������
        TScrollBar *ScrollBar1; // ����� �������������
        TGroupBox *GroupBox1; // ���������
        TRadioButton *RadioButton1; // ���������
        TRadioButton *RadioButton2; // ���������
        TRadioButton *RadioButton3; // ���������
        TChart *Chart1; // �������
        TOpenDialog *OpenDialog1; // �������� ����
        TSaveDialog *SaveDialog1; // �������� ����
        TMenuItem *File1; // ����� ����
        TMenuItem *About1; // ����� ����
        TMenuItem *Open1; // ����� ����
        TMenuItem *Save1; // ����� ����
        TMenuItem *Close1; // ����� ����
        TMenuItem *Save2; // ����� ����
        TMenuItem *Open2; // ����� ����
        TLineSeries *Series1; // ��� �������
        TLineSeries *Series2; // ��� �������
        TLineSeries *Series3; // ��� �������
        // ������ �����:
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
        __fastcall TForm1(TComponent* Owner); // �����������
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
