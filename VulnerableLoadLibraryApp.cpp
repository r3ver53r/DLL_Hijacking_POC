// VulnerableLoadLibraryApp.cpp
// This sample binary will load two DLLs (rmclient.dll & rtm.dll) using LoadLibary() function

#include <Windows.h>
#include <tchar.h>

int main()
{
    HINSTANCE hGetProcIDDLL1 = LoadLibrary(TEXT("rmclient.dll"));

    if (hGetProcIDDLL1 == NULL) {
        MessageBox(NULL, _T("Some issue loading rmclient.dll"), _T("message"), MB_OK | MB_SYSTEMMODAL);
    }
    else {
        MessageBox(NULL, _T("DLL loaded successfully"), _T("message"), MB_OK | MB_SYSTEMMODAL);
    }


    HINSTANCE hGetProcIDDLL2 = LoadLibrary(TEXT("rtm.dll"));

    if (hGetProcIDDLL2 == NULL) {
        MessageBox(NULL, _T("Some issue loading DLL"), _T("message"), MB_OK | MB_SYSTEMMODAL);
    }
    else {
        MessageBox(NULL, _T("DLL loaded successfully"), _T("message"), MB_OK | MB_SYSTEMMODAL);
    }

    MessageBox(NULL, _T("Just a message to halt application exit!"), _T("message"), MB_OK | MB_SYSTEMMODAL);

    return 0;
}
