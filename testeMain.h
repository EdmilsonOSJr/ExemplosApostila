/***************************************************************
 * Name:      testeMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-11-06
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef TESTEMAIN_H
#define TESTEMAIN_H

//(*Headers(testeFrame)
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/sizer.h>
#include <wx/slider.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class testeFrame: public wxFrame
{
    public:

        testeFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~testeFrame();

    private:

        //(*Handlers(testeFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1TextEnter(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnCheckBox1Click(wxCommandEvent& event);
        void OnChoice1Select(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnTextCtrl1TextEnter1(wxCommandEvent& event);
        void OnTextCtrl1TextEnter2(wxCommandEvent& event);
        void OnCheckBox1Click1(wxCommandEvent& event);
        void OnSlider1CmdScrollThumbRelease(wxScrollEvent& event);
        void OnTextCtrl1TextUrl(wxTextUrlEvent& event);
        void OnTextCtrl1TextEnter3(wxCommandEvent& event);
        //*)

        //(*Identifiers(testeFrame)
        static const long ID_BUTTON1;
        static const long ID_TEXTCTRL1;
        static const long ID_CHECKBOX1;
        static const long ID_CHOICE1;
        static const long ID_SLIDER1;
        static const long ID_RADIOBUTTON1;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(testeFrame)
        wxButton* Button1;
        wxCheckBox* CheckBox1;
        wxChoice* Choice1;
        wxPanel* Panel1;
        wxRadioButton* RadioButton1;
        wxSlider* Slider1;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TESTEMAIN_H
