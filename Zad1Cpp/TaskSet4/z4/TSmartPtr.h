#pragma once
#include <iostream>

template <typename T>
class TSmartPtr
{
public:
	TSmartPtr(T* p = nullptr)
		: ptr(p)
	{}

	T* operator->() const
	{
		return ptr;
	}
	T& operator*() const
	{
		return *ptr;
	}

	friend std::ostream& operator<<(std::ostream& out, const TSmartPtr& tsp)
	{
		out << tsp.ptr;
		return out;
	}

	~TSmartPtr()
	{
		delete ptr;
	}
private:
	T* ptr;
};

