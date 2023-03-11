/***************************************************************
 * Name:      BattleshipApp.h
 * Purpose:   Defines Application Class
 * Author:    Patryk Marek i Michał Koziński ()
 * Created:   2021-12-10
 * Copyright: Patryk Marek i Michał Koziński ()
 * License:
 **************************************************************/

#ifndef BATTLESHIPAPP_H
#define BATTLESHIPAPP_H

#include <wx/app.h>

class BattleshipApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // BATTLESHIPAPP_H
