/***************************************************************
 * Name:      BattleshipApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Patryk Marek i Michał Koziński ()
 * Created:   2021-12-10
 * Copyright: Patryk Marek i Michał Koziński ()
 * License:
 **************************************************************/

#include "BattleshipApp.h"

//(*AppHeaders
#include "BattleshipMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(BattleshipApp);

bool BattleshipApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	BattleshipDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
