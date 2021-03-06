/*
===============================================================================

    Battle City - CAdmin header file
    Copyright (C) 2005-2013  battlecity.org

    This file is part of Battle City.

    Battle City is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Battle City is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Battle City.  If not, see <http://www.gnu.org/licenses/>.
===============================================================================
*/
#ifndef _CAdmin
#define _CAdmin

#include "CGame.h"
#include "NetMessages.h"

class CGame;

class CAdmin
{
public:
    CAdmin(CGame *game);
    ~CAdmin();

    HWND hWnd;

    char IsOpen; 

    void ShowAdminDlg();
    void DrawPlayerList();
    void DrawItemList();

    void AddBan(sSMBan *ban);
    void SetNews(string TheNews);
    void SetStartingCity(int City);
private:
    CGame *p;
protected:

};

#endif