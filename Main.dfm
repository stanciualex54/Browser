object Form1: TForm1
  Left = 458
  Top = 257
  Width = 526
  Height = 595
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Edit: TRichEdit
    Left = 0
    Top = 40
    Width = 505
    Height = 505
    Lines.Strings = (
      'Edit')
    TabOrder = 0
  end
  object Button2: TButton
    Left = 112
    Top = 8
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Exit'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button1: TButton
    Left = 16
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Choose File'
    TabOrder = 2
    OnClick = Button1Click
  end
  object open: TOpenDialog
    Left = 200
    Top = 8
  end
end
