#pragma once

#include "Core.h"
#include "Log.h"

#include <string>

constexpr const char* cAppName = "Asset Cooker";


struct App
{
	void Init(void* inHwnd);

	void RequestExit();
	bool IsExitRequested();
	bool IsExitReady();

	void FatalError(const std::string& inMessage);

	Log   mLog;
	void* mMainWindowHwnd = nullptr;
	bool  mExitRequested  = false;
	bool  mExitReady      = false;
};

inline App gApp;