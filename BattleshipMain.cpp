/***************************************************************
 * Name:      BattleshipMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Patryk Marek i Michał Koziński ()
 * Created:   2021-12-10
 * Copyright: Patryk Marek i Michał Koziński ()
 * License:
 **************************************************************/

#include "BattleshipMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(BattleshipDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8(s)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(BattleshipDialog)
const long BattleshipDialog::ID_STATICBITMAP1 = wxNewId();
const long BattleshipDialog::ID_STATICTEXT2 = wxNewId();
const long BattleshipDialog::ID_STATICTEXT3 = wxNewId();
const long BattleshipDialog::ID_STATICTEXT4 = wxNewId();
const long BattleshipDialog::ID_STATICTEXT5 = wxNewId();
const long BattleshipDialog::ID_STATICTEXT6 = wxNewId();
const long BattleshipDialog::ID_STATICTEXT7 = wxNewId();
const long BattleshipDialog::ID_STATICTEXT8 = wxNewId();
const long BattleshipDialog::ID_CHECKBOX1 = wxNewId();
const long BattleshipDialog::ID_BUTTON1 = wxNewId();
const long BattleshipDialog::ID_BUTTON2 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON1 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON2 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON3 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON4 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON5 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON6 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON7 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON8 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON9 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON10 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON11 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON12 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON13 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON14 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON15 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON16 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON17 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON18 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON19 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON20 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON21 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON22 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON23 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON24 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON25 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON26 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON27 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON28 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON29 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON30 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON31 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON32 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON33 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON34 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON35 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON36 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON37 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON38 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON39 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON40 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON41 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON42 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON43 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON44 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON45 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON46 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON47 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON48 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON49 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON50 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON51 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON52 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON53 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON54 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON55 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON56 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON57 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON58 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON59 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON60 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON61 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON62 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON63 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON64 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON65 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON66 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON67 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON68 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON69 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON70 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON71 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON72 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON73 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON74 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON75 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON76 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON77 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON78 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON79 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON80 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON81 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON82 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON83 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON84 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON85 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON86 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON87 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON88 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON89 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON90 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON91 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON92 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON93 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON94 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON95 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON96 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON97 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON98 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON99 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON100 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON101 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON102 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON103 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON104 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON105 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON106 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON107 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON108 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON109 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON110 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON111 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON112 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON113 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON114 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON115 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON116 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON117 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON118 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON119 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON120 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON121 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON122 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON123 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON124 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON125 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON126 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON127 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON128 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON129 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON130 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON131 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON132 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON133 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON134 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON135 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON136 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON137 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON138 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON139 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON140 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON141 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON142 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON143 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON144 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON145 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON146 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON147 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON148 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON149 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON150 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON151 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON152 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON153 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON154 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON155 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON156 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON157 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON158 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON159 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON160 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON161 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON162 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON163 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON164 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON165 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON166 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON167 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON168 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON169 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON170 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON171 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON172 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON173 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON174 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON175 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON176 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON177 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON178 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON179 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON180 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON181 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON182 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON183 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON184 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON185 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON186 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON187 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON188 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON189 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON190 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON191 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON192 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON193 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON194 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON195 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON196 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON197 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON198 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON199 = wxNewId();
const long BattleshipDialog::ID_BITMAPBUTTON200 = wxNewId();
//*)

BEGIN_EVENT_TABLE(BattleshipDialog,wxDialog)
    //(*EventTable(BattleshipDialog)
    //*)
END_EVENT_TABLE()

BattleshipDialog::BattleshipDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(BattleshipDialog)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* FlexGridSizer4;
    wxFlexGridSizer* FlexGridSizer5;

    Create(parent, id, _("Battleships"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxCLOSE_BOX|wxMINIMIZE_BOX, _T("id"));
    SetClientSize(wxSize(970,370));
    FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
    FlexGridSizer2 = new wxFlexGridSizer(1, 3, 0, 0);
    FlexGridSizer3 = new wxFlexGridSizer(7, 1, 0, 0);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("banner.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer3->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Statystyki"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Pozostałe statki:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    BoxSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    BoxSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Trafione:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    BoxSizer2->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    BoxSizer2->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Pudła:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    BoxSizer3->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    BoxSizer3->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox1 = new wxCheckBox(this, ID_CHECKBOX1, _("Zaczyna komputer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBox1->SetValue(false);
    FlexGridSizer3->Add(CheckBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(this, ID_BUTTON1, _("Zasady gry"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("Restart"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer4->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4 = new wxFlexGridSizer(10, 10, 0, 0);
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    FlexGridSizer4->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    FlexGridSizer4->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    FlexGridSizer4->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    FlexGridSizer4->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    FlexGridSizer4->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton6 = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    FlexGridSizer4->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton7 = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
    FlexGridSizer4->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton8 = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
    FlexGridSizer4->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton9 = new wxBitmapButton(this, ID_BITMAPBUTTON9, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
    FlexGridSizer4->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton10 = new wxBitmapButton(this, ID_BITMAPBUTTON10, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
    FlexGridSizer4->Add(BitmapButton10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton11 = new wxBitmapButton(this, ID_BITMAPBUTTON11, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
    FlexGridSizer4->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton12 = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
    FlexGridSizer4->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton13 = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
    FlexGridSizer4->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
    FlexGridSizer4->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
    FlexGridSizer4->Add(BitmapButton15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton16 = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
    FlexGridSizer4->Add(BitmapButton16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton17 = new wxBitmapButton(this, ID_BITMAPBUTTON17, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
    FlexGridSizer4->Add(BitmapButton17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton18 = new wxBitmapButton(this, ID_BITMAPBUTTON18, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON18"));
    FlexGridSizer4->Add(BitmapButton18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton19 = new wxBitmapButton(this, ID_BITMAPBUTTON19, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
    FlexGridSizer4->Add(BitmapButton19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton20 = new wxBitmapButton(this, ID_BITMAPBUTTON20, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
    FlexGridSizer4->Add(BitmapButton20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton21 = new wxBitmapButton(this, ID_BITMAPBUTTON21, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON21"));
    FlexGridSizer4->Add(BitmapButton21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton22 = new wxBitmapButton(this, ID_BITMAPBUTTON22, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON22"));
    FlexGridSizer4->Add(BitmapButton22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton23 = new wxBitmapButton(this, ID_BITMAPBUTTON23, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON23"));
    FlexGridSizer4->Add(BitmapButton23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton24 = new wxBitmapButton(this, ID_BITMAPBUTTON24, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON24"));
    FlexGridSizer4->Add(BitmapButton24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton25 = new wxBitmapButton(this, ID_BITMAPBUTTON25, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON25"));
    FlexGridSizer4->Add(BitmapButton25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton26 = new wxBitmapButton(this, ID_BITMAPBUTTON26, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON26"));
    FlexGridSizer4->Add(BitmapButton26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton27 = new wxBitmapButton(this, ID_BITMAPBUTTON27, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON27"));
    FlexGridSizer4->Add(BitmapButton27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton28 = new wxBitmapButton(this, ID_BITMAPBUTTON28, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON28"));
    FlexGridSizer4->Add(BitmapButton28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton29 = new wxBitmapButton(this, ID_BITMAPBUTTON29, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON29"));
    FlexGridSizer4->Add(BitmapButton29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton30 = new wxBitmapButton(this, ID_BITMAPBUTTON30, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON30"));
    FlexGridSizer4->Add(BitmapButton30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton31 = new wxBitmapButton(this, ID_BITMAPBUTTON31, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON31"));
    FlexGridSizer4->Add(BitmapButton31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton32 = new wxBitmapButton(this, ID_BITMAPBUTTON32, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON32"));
    FlexGridSizer4->Add(BitmapButton32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton33 = new wxBitmapButton(this, ID_BITMAPBUTTON33, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON33"));
    FlexGridSizer4->Add(BitmapButton33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton34 = new wxBitmapButton(this, ID_BITMAPBUTTON34, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON34"));
    FlexGridSizer4->Add(BitmapButton34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton35 = new wxBitmapButton(this, ID_BITMAPBUTTON35, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON35"));
    FlexGridSizer4->Add(BitmapButton35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton36 = new wxBitmapButton(this, ID_BITMAPBUTTON36, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON36"));
    FlexGridSizer4->Add(BitmapButton36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton37 = new wxBitmapButton(this, ID_BITMAPBUTTON37, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON37"));
    FlexGridSizer4->Add(BitmapButton37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton38 = new wxBitmapButton(this, ID_BITMAPBUTTON38, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON38"));
    FlexGridSizer4->Add(BitmapButton38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton39 = new wxBitmapButton(this, ID_BITMAPBUTTON39, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON39"));
    FlexGridSizer4->Add(BitmapButton39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton40 = new wxBitmapButton(this, ID_BITMAPBUTTON40, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON40"));
    FlexGridSizer4->Add(BitmapButton40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton41 = new wxBitmapButton(this, ID_BITMAPBUTTON41, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON41"));
    FlexGridSizer4->Add(BitmapButton41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton42 = new wxBitmapButton(this, ID_BITMAPBUTTON42, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON42"));
    FlexGridSizer4->Add(BitmapButton42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton43 = new wxBitmapButton(this, ID_BITMAPBUTTON43, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON43"));
    FlexGridSizer4->Add(BitmapButton43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton44 = new wxBitmapButton(this, ID_BITMAPBUTTON44, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON44"));
    FlexGridSizer4->Add(BitmapButton44, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton45 = new wxBitmapButton(this, ID_BITMAPBUTTON45, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON45"));
    FlexGridSizer4->Add(BitmapButton45, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton46 = new wxBitmapButton(this, ID_BITMAPBUTTON46, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON46"));
    FlexGridSizer4->Add(BitmapButton46, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton47 = new wxBitmapButton(this, ID_BITMAPBUTTON47, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON47"));
    FlexGridSizer4->Add(BitmapButton47, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton48 = new wxBitmapButton(this, ID_BITMAPBUTTON48, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON48"));
    FlexGridSizer4->Add(BitmapButton48, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton49 = new wxBitmapButton(this, ID_BITMAPBUTTON49, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON49"));
    FlexGridSizer4->Add(BitmapButton49, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton50 = new wxBitmapButton(this, ID_BITMAPBUTTON50, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON50"));
    FlexGridSizer4->Add(BitmapButton50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton51 = new wxBitmapButton(this, ID_BITMAPBUTTON51, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON51"));
    FlexGridSizer4->Add(BitmapButton51, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton52 = new wxBitmapButton(this, ID_BITMAPBUTTON52, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON52"));
    FlexGridSizer4->Add(BitmapButton52, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton53 = new wxBitmapButton(this, ID_BITMAPBUTTON53, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON53"));
    FlexGridSizer4->Add(BitmapButton53, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton54 = new wxBitmapButton(this, ID_BITMAPBUTTON54, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON54"));
    FlexGridSizer4->Add(BitmapButton54, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton55 = new wxBitmapButton(this, ID_BITMAPBUTTON55, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON55"));
    FlexGridSizer4->Add(BitmapButton55, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton56 = new wxBitmapButton(this, ID_BITMAPBUTTON56, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON56"));
    FlexGridSizer4->Add(BitmapButton56, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton57 = new wxBitmapButton(this, ID_BITMAPBUTTON57, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON57"));
    FlexGridSizer4->Add(BitmapButton57, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton58 = new wxBitmapButton(this, ID_BITMAPBUTTON58, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON58"));
    FlexGridSizer4->Add(BitmapButton58, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton59 = new wxBitmapButton(this, ID_BITMAPBUTTON59, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON59"));
    FlexGridSizer4->Add(BitmapButton59, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton60 = new wxBitmapButton(this, ID_BITMAPBUTTON60, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON60"));
    FlexGridSizer4->Add(BitmapButton60, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton61 = new wxBitmapButton(this, ID_BITMAPBUTTON61, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON61"));
    FlexGridSizer4->Add(BitmapButton61, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton62 = new wxBitmapButton(this, ID_BITMAPBUTTON62, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON62"));
    FlexGridSizer4->Add(BitmapButton62, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton63 = new wxBitmapButton(this, ID_BITMAPBUTTON63, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON63"));
    FlexGridSizer4->Add(BitmapButton63, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton64 = new wxBitmapButton(this, ID_BITMAPBUTTON64, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON64"));
    FlexGridSizer4->Add(BitmapButton64, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton65 = new wxBitmapButton(this, ID_BITMAPBUTTON65, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON65"));
    FlexGridSizer4->Add(BitmapButton65, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton66 = new wxBitmapButton(this, ID_BITMAPBUTTON66, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON66"));
    FlexGridSizer4->Add(BitmapButton66, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton67 = new wxBitmapButton(this, ID_BITMAPBUTTON67, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON67"));
    FlexGridSizer4->Add(BitmapButton67, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton68 = new wxBitmapButton(this, ID_BITMAPBUTTON68, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON68"));
    FlexGridSizer4->Add(BitmapButton68, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton69 = new wxBitmapButton(this, ID_BITMAPBUTTON69, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON69"));
    FlexGridSizer4->Add(BitmapButton69, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton70 = new wxBitmapButton(this, ID_BITMAPBUTTON70, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON70"));
    FlexGridSizer4->Add(BitmapButton70, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton71 = new wxBitmapButton(this, ID_BITMAPBUTTON71, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON71"));
    FlexGridSizer4->Add(BitmapButton71, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton72 = new wxBitmapButton(this, ID_BITMAPBUTTON72, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON72"));
    FlexGridSizer4->Add(BitmapButton72, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton73 = new wxBitmapButton(this, ID_BITMAPBUTTON73, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON73"));
    FlexGridSizer4->Add(BitmapButton73, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton74 = new wxBitmapButton(this, ID_BITMAPBUTTON74, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON74"));
    FlexGridSizer4->Add(BitmapButton74, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton75 = new wxBitmapButton(this, ID_BITMAPBUTTON75, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON75"));
    FlexGridSizer4->Add(BitmapButton75, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton76 = new wxBitmapButton(this, ID_BITMAPBUTTON76, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON76"));
    FlexGridSizer4->Add(BitmapButton76, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton77 = new wxBitmapButton(this, ID_BITMAPBUTTON77, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON77"));
    FlexGridSizer4->Add(BitmapButton77, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton78 = new wxBitmapButton(this, ID_BITMAPBUTTON78, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON78"));
    FlexGridSizer4->Add(BitmapButton78, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton79 = new wxBitmapButton(this, ID_BITMAPBUTTON79, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON79"));
    FlexGridSizer4->Add(BitmapButton79, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton80 = new wxBitmapButton(this, ID_BITMAPBUTTON80, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON80"));
    FlexGridSizer4->Add(BitmapButton80, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton81 = new wxBitmapButton(this, ID_BITMAPBUTTON81, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON81"));
    FlexGridSizer4->Add(BitmapButton81, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton82 = new wxBitmapButton(this, ID_BITMAPBUTTON82, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON82"));
    FlexGridSizer4->Add(BitmapButton82, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton83 = new wxBitmapButton(this, ID_BITMAPBUTTON83, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON83"));
    FlexGridSizer4->Add(BitmapButton83, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton84 = new wxBitmapButton(this, ID_BITMAPBUTTON84, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON84"));
    FlexGridSizer4->Add(BitmapButton84, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton85 = new wxBitmapButton(this, ID_BITMAPBUTTON85, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON85"));
    FlexGridSizer4->Add(BitmapButton85, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton86 = new wxBitmapButton(this, ID_BITMAPBUTTON86, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON86"));
    FlexGridSizer4->Add(BitmapButton86, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton87 = new wxBitmapButton(this, ID_BITMAPBUTTON87, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON87"));
    FlexGridSizer4->Add(BitmapButton87, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton88 = new wxBitmapButton(this, ID_BITMAPBUTTON88, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON88"));
    FlexGridSizer4->Add(BitmapButton88, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton89 = new wxBitmapButton(this, ID_BITMAPBUTTON89, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON89"));
    FlexGridSizer4->Add(BitmapButton89, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton90 = new wxBitmapButton(this, ID_BITMAPBUTTON90, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON90"));
    FlexGridSizer4->Add(BitmapButton90, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton91 = new wxBitmapButton(this, ID_BITMAPBUTTON91, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON91"));
    FlexGridSizer4->Add(BitmapButton91, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton92 = new wxBitmapButton(this, ID_BITMAPBUTTON92, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON92"));
    FlexGridSizer4->Add(BitmapButton92, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton93 = new wxBitmapButton(this, ID_BITMAPBUTTON93, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON93"));
    FlexGridSizer4->Add(BitmapButton93, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton94 = new wxBitmapButton(this, ID_BITMAPBUTTON94, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON94"));
    FlexGridSizer4->Add(BitmapButton94, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton95 = new wxBitmapButton(this, ID_BITMAPBUTTON95, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON95"));
    FlexGridSizer4->Add(BitmapButton95, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton96 = new wxBitmapButton(this, ID_BITMAPBUTTON96, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON96"));
    FlexGridSizer4->Add(BitmapButton96, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton97 = new wxBitmapButton(this, ID_BITMAPBUTTON97, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON97"));
    FlexGridSizer4->Add(BitmapButton97, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton98 = new wxBitmapButton(this, ID_BITMAPBUTTON98, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON98"));
    FlexGridSizer4->Add(BitmapButton98, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton99 = new wxBitmapButton(this, ID_BITMAPBUTTON99, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON99"));
    FlexGridSizer4->Add(BitmapButton99, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton100 = new wxBitmapButton(this, ID_BITMAPBUTTON100, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON100"));
    FlexGridSizer4->Add(BitmapButton100, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer2->Add(FlexGridSizer4, 1, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    FlexGridSizer5 = new wxFlexGridSizer(10, 10, 0, 0);
    BitmapButton101 = new wxBitmapButton(this, ID_BITMAPBUTTON101, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON101"));
    FlexGridSizer5->Add(BitmapButton101, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton102 = new wxBitmapButton(this, ID_BITMAPBUTTON102, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON102"));
    FlexGridSizer5->Add(BitmapButton102, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton103 = new wxBitmapButton(this, ID_BITMAPBUTTON103, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON103"));
    FlexGridSizer5->Add(BitmapButton103, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton104 = new wxBitmapButton(this, ID_BITMAPBUTTON104, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON104"));
    FlexGridSizer5->Add(BitmapButton104, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton105 = new wxBitmapButton(this, ID_BITMAPBUTTON105, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON105"));
    FlexGridSizer5->Add(BitmapButton105, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton106 = new wxBitmapButton(this, ID_BITMAPBUTTON106, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON106"));
    FlexGridSizer5->Add(BitmapButton106, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton107 = new wxBitmapButton(this, ID_BITMAPBUTTON107, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON107"));
    FlexGridSizer5->Add(BitmapButton107, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton108 = new wxBitmapButton(this, ID_BITMAPBUTTON108, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON108"));
    FlexGridSizer5->Add(BitmapButton108, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton109 = new wxBitmapButton(this, ID_BITMAPBUTTON109, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON109"));
    FlexGridSizer5->Add(BitmapButton109, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton110 = new wxBitmapButton(this, ID_BITMAPBUTTON110, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON110"));
    FlexGridSizer5->Add(BitmapButton110, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton111 = new wxBitmapButton(this, ID_BITMAPBUTTON111, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON111"));
    FlexGridSizer5->Add(BitmapButton111, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton112 = new wxBitmapButton(this, ID_BITMAPBUTTON112, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON112"));
    FlexGridSizer5->Add(BitmapButton112, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton113 = new wxBitmapButton(this, ID_BITMAPBUTTON113, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON113"));
    FlexGridSizer5->Add(BitmapButton113, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton114 = new wxBitmapButton(this, ID_BITMAPBUTTON114, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON114"));
    FlexGridSizer5->Add(BitmapButton114, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton115 = new wxBitmapButton(this, ID_BITMAPBUTTON115, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON115"));
    FlexGridSizer5->Add(BitmapButton115, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton116 = new wxBitmapButton(this, ID_BITMAPBUTTON116, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON116"));
    FlexGridSizer5->Add(BitmapButton116, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton117 = new wxBitmapButton(this, ID_BITMAPBUTTON117, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON117"));
    FlexGridSizer5->Add(BitmapButton117, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton118 = new wxBitmapButton(this, ID_BITMAPBUTTON118, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON118"));
    FlexGridSizer5->Add(BitmapButton118, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton119 = new wxBitmapButton(this, ID_BITMAPBUTTON119, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON119"));
    FlexGridSizer5->Add(BitmapButton119, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton120 = new wxBitmapButton(this, ID_BITMAPBUTTON120, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON120"));
    FlexGridSizer5->Add(BitmapButton120, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton121 = new wxBitmapButton(this, ID_BITMAPBUTTON121, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON121"));
    FlexGridSizer5->Add(BitmapButton121, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton122 = new wxBitmapButton(this, ID_BITMAPBUTTON122, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON122"));
    FlexGridSizer5->Add(BitmapButton122, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton123 = new wxBitmapButton(this, ID_BITMAPBUTTON123, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON123"));
    FlexGridSizer5->Add(BitmapButton123, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton124 = new wxBitmapButton(this, ID_BITMAPBUTTON124, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON124"));
    FlexGridSizer5->Add(BitmapButton124, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton125 = new wxBitmapButton(this, ID_BITMAPBUTTON125, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON125"));
    FlexGridSizer5->Add(BitmapButton125, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton126 = new wxBitmapButton(this, ID_BITMAPBUTTON126, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON126"));
    FlexGridSizer5->Add(BitmapButton126, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton127 = new wxBitmapButton(this, ID_BITMAPBUTTON127, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON127"));
    FlexGridSizer5->Add(BitmapButton127, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton128 = new wxBitmapButton(this, ID_BITMAPBUTTON128, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON128"));
    FlexGridSizer5->Add(BitmapButton128, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton129 = new wxBitmapButton(this, ID_BITMAPBUTTON129, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON129"));
    FlexGridSizer5->Add(BitmapButton129, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton130 = new wxBitmapButton(this, ID_BITMAPBUTTON130, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON130"));
    FlexGridSizer5->Add(BitmapButton130, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton131 = new wxBitmapButton(this, ID_BITMAPBUTTON131, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON131"));
    FlexGridSizer5->Add(BitmapButton131, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton132 = new wxBitmapButton(this, ID_BITMAPBUTTON132, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON132"));
    FlexGridSizer5->Add(BitmapButton132, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton133 = new wxBitmapButton(this, ID_BITMAPBUTTON133, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON133"));
    FlexGridSizer5->Add(BitmapButton133, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton134 = new wxBitmapButton(this, ID_BITMAPBUTTON134, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON134"));
    FlexGridSizer5->Add(BitmapButton134, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton135 = new wxBitmapButton(this, ID_BITMAPBUTTON135, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON135"));
    FlexGridSizer5->Add(BitmapButton135, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton136 = new wxBitmapButton(this, ID_BITMAPBUTTON136, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON136"));
    FlexGridSizer5->Add(BitmapButton136, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton137 = new wxBitmapButton(this, ID_BITMAPBUTTON137, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON137"));
    FlexGridSizer5->Add(BitmapButton137, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton138 = new wxBitmapButton(this, ID_BITMAPBUTTON138, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON138"));
    FlexGridSizer5->Add(BitmapButton138, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton139 = new wxBitmapButton(this, ID_BITMAPBUTTON139, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON139"));
    FlexGridSizer5->Add(BitmapButton139, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton140 = new wxBitmapButton(this, ID_BITMAPBUTTON140, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON140"));
    FlexGridSizer5->Add(BitmapButton140, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton141 = new wxBitmapButton(this, ID_BITMAPBUTTON141, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON141"));
    FlexGridSizer5->Add(BitmapButton141, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton142 = new wxBitmapButton(this, ID_BITMAPBUTTON142, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON142"));
    FlexGridSizer5->Add(BitmapButton142, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton143 = new wxBitmapButton(this, ID_BITMAPBUTTON143, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON143"));
    FlexGridSizer5->Add(BitmapButton143, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton144 = new wxBitmapButton(this, ID_BITMAPBUTTON144, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON144"));
    FlexGridSizer5->Add(BitmapButton144, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton145 = new wxBitmapButton(this, ID_BITMAPBUTTON145, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON145"));
    FlexGridSizer5->Add(BitmapButton145, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton146 = new wxBitmapButton(this, ID_BITMAPBUTTON146, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON146"));
    FlexGridSizer5->Add(BitmapButton146, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton147 = new wxBitmapButton(this, ID_BITMAPBUTTON147, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON147"));
    FlexGridSizer5->Add(BitmapButton147, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton148 = new wxBitmapButton(this, ID_BITMAPBUTTON148, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON148"));
    FlexGridSizer5->Add(BitmapButton148, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton149 = new wxBitmapButton(this, ID_BITMAPBUTTON149, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON149"));
    FlexGridSizer5->Add(BitmapButton149, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton150 = new wxBitmapButton(this, ID_BITMAPBUTTON150, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON150"));
    FlexGridSizer5->Add(BitmapButton150, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton151 = new wxBitmapButton(this, ID_BITMAPBUTTON151, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON151"));
    FlexGridSizer5->Add(BitmapButton151, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton152 = new wxBitmapButton(this, ID_BITMAPBUTTON152, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON152"));
    FlexGridSizer5->Add(BitmapButton152, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton153 = new wxBitmapButton(this, ID_BITMAPBUTTON153, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON153"));
    FlexGridSizer5->Add(BitmapButton153, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton154 = new wxBitmapButton(this, ID_BITMAPBUTTON154, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON154"));
    FlexGridSizer5->Add(BitmapButton154, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton155 = new wxBitmapButton(this, ID_BITMAPBUTTON155, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON155"));
    FlexGridSizer5->Add(BitmapButton155, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton156 = new wxBitmapButton(this, ID_BITMAPBUTTON156, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON156"));
    FlexGridSizer5->Add(BitmapButton156, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton157 = new wxBitmapButton(this, ID_BITMAPBUTTON157, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON157"));
    FlexGridSizer5->Add(BitmapButton157, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton158 = new wxBitmapButton(this, ID_BITMAPBUTTON158, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON158"));
    FlexGridSizer5->Add(BitmapButton158, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton159 = new wxBitmapButton(this, ID_BITMAPBUTTON159, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON159"));
    FlexGridSizer5->Add(BitmapButton159, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton160 = new wxBitmapButton(this, ID_BITMAPBUTTON160, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON160"));
    FlexGridSizer5->Add(BitmapButton160, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton161 = new wxBitmapButton(this, ID_BITMAPBUTTON161, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON161"));
    FlexGridSizer5->Add(BitmapButton161, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton162 = new wxBitmapButton(this, ID_BITMAPBUTTON162, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON162"));
    FlexGridSizer5->Add(BitmapButton162, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton163 = new wxBitmapButton(this, ID_BITMAPBUTTON163, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON163"));
    FlexGridSizer5->Add(BitmapButton163, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton164 = new wxBitmapButton(this, ID_BITMAPBUTTON164, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON164"));
    FlexGridSizer5->Add(BitmapButton164, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton165 = new wxBitmapButton(this, ID_BITMAPBUTTON165, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON165"));
    FlexGridSizer5->Add(BitmapButton165, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton166 = new wxBitmapButton(this, ID_BITMAPBUTTON166, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON166"));
    FlexGridSizer5->Add(BitmapButton166, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton167 = new wxBitmapButton(this, ID_BITMAPBUTTON167, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON167"));
    FlexGridSizer5->Add(BitmapButton167, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton168 = new wxBitmapButton(this, ID_BITMAPBUTTON168, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON168"));
    FlexGridSizer5->Add(BitmapButton168, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton169 = new wxBitmapButton(this, ID_BITMAPBUTTON169, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON169"));
    FlexGridSizer5->Add(BitmapButton169, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton170 = new wxBitmapButton(this, ID_BITMAPBUTTON170, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON170"));
    FlexGridSizer5->Add(BitmapButton170, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton171 = new wxBitmapButton(this, ID_BITMAPBUTTON171, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON171"));
    FlexGridSizer5->Add(BitmapButton171, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton172 = new wxBitmapButton(this, ID_BITMAPBUTTON172, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON172"));
    FlexGridSizer5->Add(BitmapButton172, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton173 = new wxBitmapButton(this, ID_BITMAPBUTTON173, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON173"));
    FlexGridSizer5->Add(BitmapButton173, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton174 = new wxBitmapButton(this, ID_BITMAPBUTTON174, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON174"));
    FlexGridSizer5->Add(BitmapButton174, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton175 = new wxBitmapButton(this, ID_BITMAPBUTTON175, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON175"));
    FlexGridSizer5->Add(BitmapButton175, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton176 = new wxBitmapButton(this, ID_BITMAPBUTTON176, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON176"));
    FlexGridSizer5->Add(BitmapButton176, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton177 = new wxBitmapButton(this, ID_BITMAPBUTTON177, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON177"));
    FlexGridSizer5->Add(BitmapButton177, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton178 = new wxBitmapButton(this, ID_BITMAPBUTTON178, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON178"));
    FlexGridSizer5->Add(BitmapButton178, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton179 = new wxBitmapButton(this, ID_BITMAPBUTTON179, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON179"));
    FlexGridSizer5->Add(BitmapButton179, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton180 = new wxBitmapButton(this, ID_BITMAPBUTTON180, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON180"));
    FlexGridSizer5->Add(BitmapButton180, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton181 = new wxBitmapButton(this, ID_BITMAPBUTTON181, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON181"));
    FlexGridSizer5->Add(BitmapButton181, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton182 = new wxBitmapButton(this, ID_BITMAPBUTTON182, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON182"));
    FlexGridSizer5->Add(BitmapButton182, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton183 = new wxBitmapButton(this, ID_BITMAPBUTTON183, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON183"));
    FlexGridSizer5->Add(BitmapButton183, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton184 = new wxBitmapButton(this, ID_BITMAPBUTTON184, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON184"));
    FlexGridSizer5->Add(BitmapButton184, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton185 = new wxBitmapButton(this, ID_BITMAPBUTTON185, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON185"));
    FlexGridSizer5->Add(BitmapButton185, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton186 = new wxBitmapButton(this, ID_BITMAPBUTTON186, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON186"));
    FlexGridSizer5->Add(BitmapButton186, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton187 = new wxBitmapButton(this, ID_BITMAPBUTTON187, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON187"));
    FlexGridSizer5->Add(BitmapButton187, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton188 = new wxBitmapButton(this, ID_BITMAPBUTTON188, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON188"));
    FlexGridSizer5->Add(BitmapButton188, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton189 = new wxBitmapButton(this, ID_BITMAPBUTTON189, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON189"));
    FlexGridSizer5->Add(BitmapButton189, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton190 = new wxBitmapButton(this, ID_BITMAPBUTTON190, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON190"));
    FlexGridSizer5->Add(BitmapButton190, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton191 = new wxBitmapButton(this, ID_BITMAPBUTTON191, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON191"));
    FlexGridSizer5->Add(BitmapButton191, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton192 = new wxBitmapButton(this, ID_BITMAPBUTTON192, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON192"));
    FlexGridSizer5->Add(BitmapButton192, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton193 = new wxBitmapButton(this, ID_BITMAPBUTTON193, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON193"));
    FlexGridSizer5->Add(BitmapButton193, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton194 = new wxBitmapButton(this, ID_BITMAPBUTTON194, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON194"));
    FlexGridSizer5->Add(BitmapButton194, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton195 = new wxBitmapButton(this, ID_BITMAPBUTTON195, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON195"));
    FlexGridSizer5->Add(BitmapButton195, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton196 = new wxBitmapButton(this, ID_BITMAPBUTTON196, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON196"));
    FlexGridSizer5->Add(BitmapButton196, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton197 = new wxBitmapButton(this, ID_BITMAPBUTTON197, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON197"));
    FlexGridSizer5->Add(BitmapButton197, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton198 = new wxBitmapButton(this, ID_BITMAPBUTTON198, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON198"));
    FlexGridSizer5->Add(BitmapButton198, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton199 = new wxBitmapButton(this, ID_BITMAPBUTTON199, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON199"));
    FlexGridSizer5->Add(BitmapButton199, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton200 = new wxBitmapButton(this, ID_BITMAPBUTTON200, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON200"));
    FlexGridSizer5->Add(BitmapButton200, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer2->Add(FlexGridSizer5, 1, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    SetSizer(FlexGridSizer1);
    Layout();

    Connect(ID_CHECKBOX1,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnCheckBox1Click);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnZasadyClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnKoniecClick);
    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON18,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON20,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON21,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON22,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON23,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON24,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON25,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON26,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON27,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON28,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON29,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON30,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON31,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON32,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON33,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON34,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON35,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON36,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON37,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON38,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON39,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON40,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON41,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON42,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON43,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON44,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON45,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON46,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON47,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON48,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON49,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON50,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON51,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON52,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON53,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON54,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON55,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON56,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON57,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON58,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON59,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON60,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON61,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON62,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON63,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON64,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON65,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON66,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON67,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON68,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON69,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON70,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON71,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON72,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON73,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON74,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON75,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON76,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON77,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON78,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON79,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON80,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON81,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON82,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON83,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON84,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON85,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON86,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON87,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON88,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON89,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON90,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON91,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON92,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON93,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON94,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON95,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON96,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON97,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON98,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON99,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON100,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick);
    Connect(ID_BITMAPBUTTON101,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON102,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON103,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON104,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON105,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON106,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON107,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON108,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON109,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON110,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON111,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON112,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON113,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON114,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON115,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON116,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON117,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON118,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON119,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON120,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON121,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON122,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON123,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON124,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON125,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON126,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON127,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON128,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON129,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON130,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON131,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON132,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON133,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON134,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON135,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON136,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON137,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON138,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON139,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON140,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON141,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON142,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON143,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON144,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON145,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON146,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON147,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON148,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON149,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON150,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON151,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON152,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON153,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON154,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON155,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON156,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON157,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON158,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON159,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON160,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON161,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON162,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON163,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON164,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON165,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON166,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON167,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON168,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON169,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON170,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON171,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON172,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON173,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON174,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON175,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON176,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON177,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON178,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON179,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON180,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON181,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON182,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON183,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON184,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON185,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON186,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON187,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON188,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON189,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON190,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON191,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON192,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON193,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON194,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON195,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON196,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON197,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON198,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON199,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    Connect(ID_BITMAPBUTTON200,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BattleshipDialog::OnPoleClick2);
    //*)

    //Przypisanie grafik do tablicy
    grafiki[0]=wxBitmap(wxImage(_T("blank.png")));
    grafiki[1]=wxBitmap(wxImage(_T("ship.png")));
    grafiki[2]=wxBitmap(wxImage(_T("destroyed.png")));
    grafiki[3]=wxBitmap(wxImage(_T("missed.png")));

    //Przypisanie Bitmapbuttonow do tablic pol
    int x,y;
    #define pp(i) x = (i-1)/10+1; y = (i-1)%10+1; LeftField[x][y] = BitmapButton ## i; L_id2nr[BitmapButton ## i -> GetId()] = std::make_pair(x,y)
    pp(1);	pp(2);	pp(3);	pp(4);	pp(5);	pp(6);	pp(7);	pp(8);	pp(9);	pp(10);	pp(11);	pp(12);	pp(13);	pp(14);	pp(15);	pp(16);	pp(17);	pp(18);	pp(19);	pp(20);	pp(21);	pp(22);	pp(23);	pp(24);	pp(25);	pp(26);	pp(27);	pp(28);	pp(29);	pp(30);	pp(31);	pp(32);	pp(33);	pp(34);	pp(35);	pp(36);	pp(37);	pp(38);	pp(39);	pp(40);	pp(41);	pp(42);	pp(43);	pp(44);	pp(45);	pp(46);	pp(47);	pp(48);	pp(49);	pp(50);	pp(51);	pp(52);	pp(53);	pp(54);	pp(55);	pp(56);	pp(57);	pp(58);	pp(59);	pp(60);	pp(61);	pp(62);	pp(63);	pp(64);	pp(65);	pp(66);	pp(67);	pp(68);	pp(69);	pp(70);	pp(71);	pp(72);	pp(73);	pp(74);	pp(75);	pp(76);	pp(77);	pp(78);	pp(79);	pp(80);	pp(81);	pp(82);	pp(83);	pp(84);	pp(85);	pp(86);	pp(87);	pp(88);	pp(89);	pp(90);	pp(91);	pp(92);	pp(93);	pp(94);	pp(95);	pp(96);	pp(97);	pp(98);	pp(99);	pp(100);
    #undef pp

    #define pp(i) x = (i-101)/10+1; y = (i-101)%10+1; RightField[x][y] = BitmapButton ## i; P_id2nr[BitmapButton ## i -> GetId()] = std::make_pair(x,y)
    pp(101);	pp(102);	pp(103);	pp(104);	pp(105);	pp(106);	pp(107);	pp(108);	pp(109);	pp(110);	pp(111);	pp(112);	pp(113);	pp(114);	pp(115);	pp(116);	pp(117);	pp(118);	pp(119);	pp(120);	pp(121);	pp(122);	pp(123);	pp(124);	pp(125);	pp(126);	pp(127);	pp(128);	pp(129);	pp(130);	pp(131);	pp(132);	pp(133);	pp(134);	pp(135);	pp(136);	pp(137);	pp(138);	pp(139);	pp(140);	pp(141);	pp(142);	pp(143);	pp(144);	pp(145);	pp(146);	pp(147);	pp(148);	pp(149);	pp(150);	pp(151);	pp(152);	pp(153);	pp(154);	pp(155);	pp(156);	pp(157);	pp(158);	pp(159);	pp(160);	pp(161);	pp(162);	pp(163);	pp(164);	pp(165);	pp(166);	pp(167);	pp(168);	pp(169);	pp(170);	pp(171);	pp(172);	pp(173);	pp(174);	pp(175);	pp(176);	pp(177);	pp(178);	pp(179);	pp(180);	pp(181);	pp(182);	pp(183);	pp(184);	pp(185);	pp(186);	pp(187);	pp(188);	pp(189);	pp(190);	pp(191);	pp(192);	pp(193);	pp(194);	pp(195);	pp(196);	pp(197);	pp(198);	pp(199);	pp(200);
    #undef pp

    /*for(int i=0;i<=10;i++)
    {
        for(int j=0;j<=10;j++)
        {
            id2nr[LeftField[i][j]->GetId()]=10*i+j;
        }
    }*/

    SetIcon(wxICON(ship));
    wxString s2w(string s);
    wxMessageBox(s2w("Witaj w grze statki!\nAby rozpocząć grę zacznij od rozstawienia 4-jednostkowego okrętu.\nPowodzenia!"),_("Witaj!"),wxICON_INFORMATION);
    reset();
}

string w2s(wxString w)
{
    return string(w.mb_str(wxConvUTF8));
}

wxString s2w(string s)
{
    return wxString(s.c_str(),wxConvUTF8);
}


void BattleshipDialog::reset()
{
    g.reset();
    StaticText4->SetLabel(wxString::Format("%d",g.get_left()));
    StaticText5->SetLabel(wxString::Format(s2w("Długość:")));
    StaticText6->SetLabel(wxString::Format("%d",g.get_hited()));
    StaticText7->SetLabel(wxString::Format(s2w("Ilość:")));
    StaticText8->SetLabel(wxString::Format("%d",g.get_missed()));
    cpu_shooted = false;
    for(int i=1;i<11;i++)
    {
        for(int j=1;j<11;j++)
        {
            LeftField[i][j]->SetBitmap(grafiki[0]);
            RightField[i][j]->SetBitmap(grafiki[0]);
        }
    }
    g.cpu_rozstaw();
}

BattleshipDialog::~BattleshipDialog()
{
    //(*Destroy(BattleshipDialog)
    //*)
}

void BattleshipDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void BattleshipDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void BattleshipDialog::OnPoleClick(wxCommandEvent& event)
{
    std::pair<int,int> p = L_id2nr[event.GetId()];
    pair<int,int> cpu;
    if(!g.get_faza() && g.rozstaw(p.first,p.second))
    {
        LeftField[p.first][p.second]->SetBitmap(grafiki[1]);
        cpu = g.get_cpu_ship_pos();
        //RightField[cpu.first][cpu.second]->SetBitmap(grafiki[1]); //zaznacza, gdzie rozstawia bot

        StaticText4->SetLabel(wxString::Format("%d",g.get_left()));
        StaticText6->SetLabel(wxString::Format("%d",g.get_hited()));
        StaticText8->SetLabel(wxString::Format("%d",g.get_missed()));
        if(g.get_faza()) //zmiana opisow w statystykach po ostatnim postawionym statku
        {
            StaticText5->SetLabel(wxString::Format(s2w("Trafione:")));
            StaticText7->SetLabel(wxString::Format(s2w("Pudła:")));
            wxMessageBox(s2w("Rozstawianie statków zakończone. \nRozpoczyna się bitwa.\nPowodzenia!"),_("Strzelaj!"),wxICON_INFORMATION);
            if(cpu_start)
            {
                cpu_shooted = true;
                pair<int,int> cpu = g.cpu_strzal();
                while(g.get_l_pole_status(cpu.first,cpu.second)==2)
                {
                    LeftField[cpu.first][cpu.second]->SetBitmap(grafiki[2]);
                    wxMessageBox(s2w("Zostałeś trafiony"),_("Uważaj!"),wxICON_WARNING);
                    cpu = g.cpu_strzal();
                }
                if(g.get_l_pole_status(cpu.first,cpu.second)==3)
                    LeftField[cpu.first][cpu.second]->SetBitmap(grafiki[3]);
            }
        }
    }
}


void BattleshipDialog::OnPoleClick2(wxCommandEvent& event)
{
    if(g.get_faza())
    {
        std::pair<int,int> p = P_id2nr[event.GetId()];
        if((g.get_p_pole_status(p.first,p.second)==0 || g.get_p_pole_status(p.first,p.second)==1)  && !(g.wygrana()))
        {
            if(g.strzal(p.first,p.second))
            {
                RightField[p.first][p.second]->SetBitmap(grafiki[2]);
                StaticText4->SetLabel(wxString::Format("%d",g.get_left()));
                StaticText6->SetLabel(wxString::Format("%d",g.get_hited()));
            }
            else
            {
                RightField[p.first][p.second]->SetBitmap(grafiki[3]);
                StaticText4->SetLabel(wxString::Format("%d",g.get_left()));
                StaticText8->SetLabel(wxString::Format("%d",g.get_missed()));
            }
            if(g.get_p_pole_status(p.first,p.second)!=2)
            {
                cpu_shooted = true;
                pair<int,int> cpu = g.cpu_strzal();
                while(g.get_l_pole_status(cpu.first,cpu.second)==2)
                {
                    LeftField[cpu.first][cpu.second]->SetBitmap(grafiki[2]);
                    wxMessageBox(s2w("Zostałeś trafiony"),_("Uważaj!"),wxICON_WARNING);
                    cpu = g.cpu_strzal();
                }
                if(g.get_l_pole_status(cpu.first,cpu.second)==3)
                    LeftField[cpu.first][cpu.second]->SetBitmap(grafiki[3]);
            }
        }

        if(g.wygrana())
            wxMessageBox(s2w(g.get_komunikat()));
    }
}

void BattleshipDialog::OnKoniecClick(wxCommandEvent& event)
{
    reset();
    g.reset();
    wxMessageBox(s2w("Restartowanie gry"),_("Restartowanie gry"),wxICON_INFORMATION);
}


void BattleshipDialog::OnZasadyClick(wxCommandEvent& event)
{
    wxMessageBox(s2w("Zasady gry w \"Statki\".\nGra podzielona jest na dwie fazy.\nW pierwszej z nich gracz rozstawia swoje statki, poprzez klikanie w lewą planszę, zaczynjąc od pierwszego masztu 4-jednostkowego okrętu, następnie dostawia do niego pozostałe maszty. Dostawiane maszty muszą się stykać z poprzednio postawionym, lecz nie mogą się stykać ścianami z żadnym innym. \nPotem gracz rozstawia w taki sam sposób pozostałe okręty. Okręty nie mogą się stykać ścianami.\nPo zakaończeniu rozstawiania pierwsza faza się kończy.\nDrugra faza gry polega na strzelaniu w okręty przeciwnika. By oddać strzał gracz klika na prawej planszy w pole, w które chce strzelić. Zmiana grafiki oznajmia trafienie lub pudło, w przypadku trafiena gracz kontynuuje strzelanie.\nGra kończy się, gdy gracz zatopi wszystkie statki komputera, bądź gdy komputer zatopi wszystkie statki gracza."),_("Zasady"),wxICON_QUESTION);
}


void BattleshipDialog::OnCheckBox1Click(wxCommandEvent& event) //zaczyna komputer
{
    cpu_start = CheckBox1->GetValue();

    if(g.get_faza() && (g.get_hited() != 0 || g.get_missed() != 0 || cpu_shooted))
    {
        reset();
        g.reset();
    }
    else if(g.get_faza() && g.get_hited() == 0 && g.get_missed() == 0)
    {
        cpu_shooted = true;
        pair<int,int> cpu = g.cpu_strzal();
        while(g.get_l_pole_status(cpu.first,cpu.second)==2)
        {
            LeftField[cpu.first][cpu.second]->SetBitmap(grafiki[2]);
            wxMessageBox(s2w("Zostałeś trafiony"),_("Uważaj!"),wxICON_WARNING);
            cpu = g.cpu_strzal();
        }
        if(g.get_l_pole_status(cpu.first,cpu.second)==3)
            LeftField[cpu.first][cpu.second]->SetBitmap(grafiki[3]);
    }
    if(!g.get_faza() && cpu_start)
        wxMessageBox(s2w("Rozstaw statki normalnie, bot wykona pierwszy strzał."),_("Graj dalej"),wxICON_INFORMATION);
    else if(!g.get_faza())
        wxMessageBox(s2w("Rozstaw statki normalnie, ty strzelasz jako pierwszy."),_("Graj dalej"),wxICON_INFORMATION);

}
