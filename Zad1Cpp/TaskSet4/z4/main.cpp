#include "TSmartPtr.h"

struct MyStruct
{
	void print()
	{
		std::cout << "Calling a method using TSmartPtr" << std::endl;
	}
};

int main()
{
	TSmartPtr<MyStruct> ptr(new MyStruct);
	TSmartPtr<int> int_ptr(new int(10));
	
	ptr->print();
	std::cout << int_ptr << "  ->  " << *int_ptr << std::endl;
}