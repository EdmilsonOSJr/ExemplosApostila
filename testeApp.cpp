/***************************************************************
 * Name:      testeApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-11-06
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "testeApp.h"

//(*AppHeaders
#include "testeMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(testeApp);

bool testeApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	testeFrame* Frame = new testeFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
