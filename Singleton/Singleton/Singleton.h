#pragma once
template <typename T>
class Singleton
{
public:
	static T& GetInstance()
	{
		if (instance == 0)
		{
			instance = new T;
		}
		return *instance; 
	}

	static T* GetInstancePtr()
	{
		if (instance == 0)
		{
			instance = new T;
		}
		return instance;
	}

	static void ReleaseInstance()
	{
		if (instance != 0)
		{
			delete instance;
		}
	}

protected:

	Singleton<T>(void) {};

	static T* instance;
};

template<typename T>
T* Singleton<T>::instance = 0;