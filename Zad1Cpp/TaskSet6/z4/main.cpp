// Mateusz Ka³wa

#include <iostream>
#include <vector>
#include <numeric>
#include <string>

auto main() -> int
{
    std::vector<int> numbers = { 1, 2, 3, 4 };

    auto join = [](const std::string& str, int number) {
        return str + "-" + std::to_string(number);
    };

    auto s = std::accumulate(std::next(numbers.begin()), numbers.end(), std::to_string(numbers[0]), join);

    std::cout << s << std::endl;
}