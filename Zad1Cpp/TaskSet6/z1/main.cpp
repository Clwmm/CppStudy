// Mateusz Ka³wa

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>

#define VEC_SIZE 100

std::ostream& operator<<(std::ostream& out, const std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); ++i)
	{
		out << vec[i] << "\t";
		if (i % 10 == 9)
			std::cout << std::endl;
	}
	return out;
}

struct F
{
	bool operator()(int a, int b)
	{
		return a > b;
	}
};

auto main() -> int
{
	std::vector<int> vec(VEC_SIZE);
	for (int i = 0; i < VEC_SIZE; i++)
	{
		std::iota(vec.begin(), vec.end(), 1);
	}
	std::cout << vec;
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(vec.begin(), vec.end(), g);
	std::cout << std::endl << vec;

	std::sort(vec.begin(), vec.end(), F());
	std::cout << std::endl << vec;

	std::sort(vec.begin(), vec.end(), [](int y, int z)
	{
		int y_ = y, z_ = z;
		while (y >= 10)
			y /= 10;
		while (z >= 10)
			z /= 10;
		if (y == z)
			return y_ < z_;
		else
			return y < z; 
	});
	std::cout << std::endl << vec;

}