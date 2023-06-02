#include "A.h"

int main()
{
	A a(10), b(5);

	std::cout << "a: " << a << "\nb: " << b << std::endl << std::endl;;

	std::cout << "\'a++\': " << a++ << std::endl;
	std::cout << "\t a: " << a << std::endl << std::endl;

	std::cout << "\'++a\': " << ++a << std::endl;
	std::cout << "\t a: " << a << std::endl << std::endl;

	std::cout << "\'a++++\': " << a++++ << std::endl;
	std::cout << "\t a: " << a << std::endl << std::endl;

	std::cout << "\'++++a\': " << ++++a << std::endl;
	std::cout << "\t a: " << a << std::endl << std::endl;

	std::cout << "\'++++++a\': " << ++++++a << std::endl;
	std::cout << "\t a: " << a << std::endl << std::endl;

	std::cout << "\'++a + b++\': " << ++a + b++ << std::endl;
	
	
	std::cout << "\na: " << a << "\nb: " << b << std::endl;
}