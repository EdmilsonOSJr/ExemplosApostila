/***************************************************************
 * Name:      testeMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2020-11-06
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "testeMain.h"
#include <wx/msgdlg.h>
#include <string.h>

//(*InternalHeaders(testeFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

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

//(*IdInit(testeFrame)
const long testeFrame::ID_BUTTON1 = wxNewId();
const long testeFrame::ID_TEXTCTRL1 = wxNewId();
const long testeFrame::ID_CHECKBOX1 = wxNewId();
const long testeFrame::ID_CHOICE1 = wxNewId();
const long testeFrame::ID_SLIDER1 = wxNewId();
const long testeFrame::ID_RADIOBUTTON1 = wxNewId();
const long testeFrame::ID_PANEL1 = wxNewId();
const long testeFrame::idMenuQuit = wxNewId();
const long testeFrame::idMenuAbout = wxNewId();
const long testeFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(testeFrame,wxFrame)
    //(*EventTable(testeFrame)
    //*)
END_EVENT_TABLE()

testeFrame::testeFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(testeFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(746,84));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Vizualizar conteúdos"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer2->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox1 = new wxCheckBox(Panel1, ID_CHECKBOX1, _("checkBox"), wxDefaultPosition, wxSize(129,39), 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBox1->SetValue(false);
    BoxSizer2->Add(CheckBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice1 = new wxChoice(Panel1, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Choice1->SetSelection( Choice1->Append(_("tentando1")) );
    Choice1->Append(_("testando2"));
    BoxSizer2->Add(Choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider1 = new wxSlider(Panel1, ID_SLIDER1, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER1"));
    BoxSizer2->Add(Slider1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    RadioButton1 = new wxRadioButton(Panel1, ID_RADIOBUTTON1, _("radioButton"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
    BoxSizer2->Add(RadioButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
    BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    SetSizer(BoxSizer1);
    Layout();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&testeFrame::OnButton1Click);

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_ENTER,(wxObjectEventFunction)&testeFrame::OnTextCtrl1TextEnter3);

    Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&testeFrame::OnChoice1Select);
    Connect(ID_SLIDER1,wxEVT_SCROLL_THUMBRELEASE,(wxObjectEventFunction)&testeFrame::OnSlider1CmdScrollThumbRelease);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&testeFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&testeFrame::OnAbout);
    //*)
}


testeFrame::~testeFrame()
{
    //(*Destroy(testeFrame)
    //*)
}

void testeFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void testeFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}


// Evento do clique no botão.
void testeFrame::OnButton1Click(wxCommandEvent& event)
{

    ///captura do conteúdo da caixa de texto.
    wxMessageBox("Conteudo da caixa de texto: " + TextCtrl1->GetValue());

    ///captura do conteúdo da checkBox.
    wxMessageBox(CheckBox1->GetValue()==true?"chebox marcada":"checkbox desmarcada");

    ///captura do conteúdo do radioButton.
    wxMessageBox(RadioButton1->GetValue()==true?"radio button marcado":"radio button desmarcado");

    ///captura do conteúdo do slider.
    wxMessageBox(wxString::Format("Valor do Slider: %d",Slider1->GetValue()));

    ///captura do conteúdo da lista suspensa.
    wxMessageBox(wxString::Format("Opção da lista suspensa: %s",Choice1->GetString(Choice1->GetSelection())));

}


// evento do clique numa checkBox. (exemplo semelhante para um radiobutton).
void testeFrame::OnCheckBox1Click1(wxCommandEvent& event)
{
    // mostra uma mensagem ao marcar uma checkBox.
    wxMessageBox(CheckBox1->GetValue()==true?"Marcou a box":"Desmarcou a box");
}

// Evento ao mudar um elemento de uma lista suspensa.
void testeFrame::OnChoice1Select(wxCommandEvent& event)
{
    // mostra uma mensagem ao mudar elemento da lista suspensa.
    wxMessageBox(Choice1->GetString(Choice1->GetSelection()));
}

// evento ao mudar o valor do slider.
void testeFrame::OnSlider1CmdScrollThumbRelease(wxScrollEvent& event)
{
    // mensagem com o valor selecionado no slider.
    wxMessageBox(wxString::Format("Valor do Slider: %d",Slider1->GetValue()));
}


// evento ao dar enter no campo de texto.
void testeFrame::OnTextCtrl1TextEnter3(wxCommandEvent& event)
{
    // mensagem com o valor do campo.
    wxMessageBox("Valor no input:" +  TextCtrl1->GetValue());
}
