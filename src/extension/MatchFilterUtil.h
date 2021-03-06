/*
 * Copyright (C) 2020-2025 ASHINi corp. 
 * 
 * This library is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU Lesser General Public 
 * License as published by the Free Software Foundation; either 
 * version 2.1 of the License, or (at your option) any later version. 
 * 
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 * Lesser General Public License for more details. 
 * 
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA 
 * 
 */


#ifndef MatchFilterUtilH
#define MatchFilterUtilH
//---------------------------------------------------------------------------

class CMatchFilterUtil
{

private:
	INT32		IsMatchFilter(String& strTarget, String& strSpec, UINT32 nChkType, UINT32& nMatchFind, CHAR chTok = CHAR_TOKEN_F);

public:
	INT32		IsMatchFilter(DB_FILE_INFO& tSrcDFI, DB_FILE_INFO& tTarDFI, UINT32 nFltChkType, CHAR chTok = CHAR_TOKEN_F);

public:
	INT32		IsMatchFilter(PDB_SITE_FILE& pdata, DB_FILE_INFO& tTarDFI, UINT32 nFltChkType, CHAR chTok = CHAR_TOKEN_F);

public:
	CMatchFilterUtil();
    ~CMatchFilterUtil();
};

extern CMatchFilterUtil*		t_MatchFilterUtil;


#endif
