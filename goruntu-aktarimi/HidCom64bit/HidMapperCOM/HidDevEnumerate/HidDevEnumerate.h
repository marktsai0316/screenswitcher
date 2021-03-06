////////////////////////////////////////////////////////////////////////////////
//      Copyright (c) 2008, Intel Corporation.  All Rights Reserved.	      //	
//                                                                            //
//   Portions used from the MSDN are Copyright (c) Microsoft Corporation.     //
//                                                                            //
//              INTEL CORPORATION PROPRIETARY INFORMATION                     //
//                                                                            //
// The source code contained or described herein and all documents related to //
// the source code (Material) are owned by Intel Corporation or its suppliers //
// or licensors. Title to the Material remains with Intel Corporation or its  //
// suppliers and licensors. The Material contains trade secrets and           //
// proprietary and confidential information of Intel or its suppliers and     //
// licensors. The Material is protected by worldwide copyright and trade      //
// secret laws and treaty provisions. No part of the Material may be used,    //
// copied, reproduced, modified, published, uploaded, posted, transmitted,    //
// distributed, or disclosed in any way without Intel�s prior express written //
// permission.                                                                //
//                                                                            //
// No license under any patent, copyright, trade secret or other intellectual //
// property right is granted to or conferred upon you by disclosure or        //
// delivery of the Materials, either expressly, by implication, inducement,   //
// estoppel or otherwise. Any license under such intellectual property rights //
// must be express and approved by Intel in writing.                          //
//                                                                            //
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY      //
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE        //
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR      //
// PURPOSE.                                                                   //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
//
// $Archive: /Lorado/HidMapperCOM/HidDevEnumerate/HidDevEnumerate.h $ 
//  
// $Author: Nmnguye1 $
//         
// $Date: 2/27/08 12:22p $
//                                                                            
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "resource.h"

#include <TChar.h>
#include <Windows.h>
#include <StdIO.h>
#include <SetupAPI.h>
#include <StdArg.h>

#define BUFSIZE		10240
#define WNDCLASSNAME	TEXT("HidDevEnumerate")

// message box & optionally kill app
void	MbErr( BOOL bKillApp, TCHAR *szMsg); 

int	log( TCHAR *szFormat, ...); // printf
int	logln( TCHAR *szFormat, ...); // printf - line feed
int	logwe( TCHAR *szFormat, ...); // printf -> windows error
int	logerr( DWORD dwWinError, TCHAR *szFormat, ...);

int	logerrargs( DWORD dwWinError, TCHAR *szFormat, va_list args);
int	logargs( TCHAR *szFormat, va_list args);


HWND	GetMainWnd( void);	// handle to the main window


#ifdef __cplusplus
extern "C" {
#endif
// Main function to enumerate the HID Device
int	HidDevEnumFunction(void);
int RefreshDeviceList(void);

#ifdef __cplusplus
}
#endif