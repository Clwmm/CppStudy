#include "TComplex.h"

int main()
{
	TComplex a(1, 8);
	TComplex b(2, 3);

	std::cout << a << "+" << b << " = " << a + b << std::endl;
	std::cout << a << "-" << b << " = " << a - b << std::endl;
	std::cout << a << "*" << b << " = " << a * b << std::endl;
	std::cout << a << "/" << b << " = " << a / b << std::endl;
	std::cout << "Conjugate of " << a << ": " << a.conj() << std::endl;
	std::cout << "Absolute value of " << b << ": " << b.abs() << std::endl;
}