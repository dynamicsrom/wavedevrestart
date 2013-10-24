// WavedevRestart.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hRestartEvent = CreateEvent(NULL, FALSE, FALSE, L"HTC_RESTART_NOTIFY_FOR_AUDIO");
	SetEvent(hRestartEvent);
    CloseHandle(hRestartEvent);
	return 0;
}

