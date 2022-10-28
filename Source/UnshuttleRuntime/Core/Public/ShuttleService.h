#pragma once
#include "ShuttleInfo.h"
#include "Singleton.h"

class FShuttleService : public TSingleton<FShuttleService>
{
private:
	TMap<FName, TArray<FShuttleInfo>> ShuttleInfoMap;

public:
	template<typename T, typename F>
	void ListenEvent(const FName& EventName, T* Listener, F&& Function)
	{
		
	}

	template<typename... T>
	void DispatchEvent(const FName& EventName, T&&... Args)
	{
		
	}

	void RemoveEvent(const FName& EventName){}
};
