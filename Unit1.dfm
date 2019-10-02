object Form1: TForm1
  Left = 197
  Top = 108
  Width = 661
  Height = 463
  Caption = 'PythonPlot v0.1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 456
    Top = 56
    Width = 27
    Height = 13
    Caption = 'Scale'
  end
  object Edit1: TEdit
    Left = 504
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 425
    Height = 121
    Lines.Strings = (
      'def f(x):'
      '    return sin(x)'
      'X=[x/10.0 for x in range(100)]')
    PopupMenu = PopupMenu1
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object Button1: TButton
    Left = 504
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Run'
    TabOrder = 2
    OnClick = Button1Click
  end
  object CheckBox1: TCheckBox
    Left = 504
    Top = 24
    Width = 97
    Height = 17
    Caption = 'inverse'
    TabOrder = 3
  end
  object ListBox1: TListBox
    Left = 464
    Top = 232
    Width = 65
    Height = 129
    ItemHeight = 13
    Items.Strings = (
      'Series1'
      'Series2'
      'Series3')
    TabOrder = 4
    OnClick = ListBox1Click
  end
  object ScrollBar1: TScrollBar
    Left = 504
    Top = 88
    Width = 121
    Height = 16
    PageSize = 0
    TabOrder = 5
    OnChange = ScrollBar1Change
  end
  object GroupBox1: TGroupBox
    Left = 544
    Top = 224
    Width = 97
    Height = 137
    Caption = 'Color'
    TabOrder = 6
    object RadioButton1: TRadioButton
      Left = 24
      Top = 32
      Width = 65
      Height = 17
      Caption = 'Red'
      Checked = True
      TabOrder = 0
      TabStop = True
      OnClick = RadioButton1Click
    end
    object RadioButton2: TRadioButton
      Left = 24
      Top = 64
      Width = 65
      Height = 17
      Caption = 'Green'
      TabOrder = 1
      OnClick = RadioButton2Click
    end
    object RadioButton3: TRadioButton
      Left = 24
      Top = 88
      Width = 57
      Height = 33
      Caption = 'Blue'
      TabOrder = 2
      OnClick = RadioButton3Click
    end
  end
  object Chart1: TChart
    Left = 8
    Top = 144
    Width = 441
    Height = 265
    BackWall.Brush.Color = clWhite
    BackWall.Brush.Style = bsClear
    Title.Text.Strings = (
      'TChart')
    View3D = False
    TabOrder = 7
    object Series1: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clRed
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
    object Series2: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clGreen
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
    object Series3: TLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clYellow
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
  end
  object MainMenu1: TMainMenu
    Left = 480
    Top = 168
    object File1: TMenuItem
      Caption = 'File'
      object Open1: TMenuItem
        Caption = 'Open'
        OnClick = Open1Click
      end
      object Save1: TMenuItem
        Caption = 'Save'
        OnClick = Save1Click
      end
      object Close1: TMenuItem
        Caption = 'Close'
        OnClick = Close1Click
      end
    end
    object About1: TMenuItem
      Caption = 'About'
      OnClick = About1Click
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 520
    Top = 168
    object Save2: TMenuItem
      Caption = 'Save'
      OnClick = Save2Click
    end
    object Open2: TMenuItem
      Caption = 'Open'
      OnClick = Open2Click
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 552
    Top = 168
  end
  object SaveDialog1: TSaveDialog
    Left = 592
    Top = 168
  end
end
