#pragma once

template<typename T>
class TSingleton
{
protected:
	TSingleton() {}
	TSingleton(const TSingleton& Singleton) {}

	~TSingleton() {}

	TSingleton& operator=(const TSingleton& Singleton) { return &this; }

public:
	static T& GetInstance()
	{
		static T Singleton;
		return Singleton;
	}
};