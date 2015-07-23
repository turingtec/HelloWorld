#ifndef __Singleton__
#define __Singleton__

template <typename T>
class Singleton
{
private:
	static T* me;

public:
	static T* getMe();
	static void destroy();

};

template <typename T>
T* Singleton<T>::me = 0;

template <typename T>
T* Singleton<T>::getMe()
{
	if (me == 0)
	{
		me = new T();
	}
	return me;
}

template <typename T>
void Singleton<T>::destroy()
{
	if (me != 0)
	{
		delete me;
		me = 0;
	}
}

#endif //__Singleton__