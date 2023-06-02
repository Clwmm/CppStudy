#include "TKlasa.h"

int main()
{
	TKlasa a("Toyota Supra");
	TKlasa b("Toyota Supra");

	std::cout << "Obj a:\t" << a << std::endl;
	std::cout << "Obj b:\t" << b << std::endl;
	
	std::cout << std::endl;

	const char* sst1 = "Celica";
	const char* sst2 = "Supra";

	const char* ss1 = a[sst1];
	const char* ss2 = a[sst2];

	if (ss1 != nullptr)
		std::cout << "Found: " << ss1 << "\t in object " << a << std::endl;
	else
		std::cout << "Not found: " << sst1 << "\t in object " << a << std::endl;

	std::cout << std::endl;

	if (ss2 != nullptr)
		std::cout << "Found: " << ss2 << "\t in object " << a << std::endl;
	else
		std::cout << "Not found: " << sst2 << "\t in object " << a << std::endl;

	std::cout << std::endl;

	if (a < b)
		std::cout << a << " is smaller than " << b;
	else if (a > b)
		std::cout << a << " is greater than " << b;
	else
		std::cout << a << " is equal to " << b;
}
