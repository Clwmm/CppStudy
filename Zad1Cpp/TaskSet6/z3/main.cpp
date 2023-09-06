// Mateusz Ka³wa

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

auto main() -> int
{
    std::map<int, std::string> mis = {
        {0, "zero"},
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"}
    };

    std::vector<int> numbers(100);
    std::iota(numbers.begin(), numbers.end(), 0);

    std::transform(numbers.begin(), numbers.end(), std::ostream_iterator<std::string>(std::cout, "\n"),
        [&mis](int number) 
        { 
            if (number < 10)
                return mis[number];
            std::string temp;
            int first_num = number;
            while (first_num >= 10)
                first_num /= 10;
            temp = mis[first_num] + " " + mis[number%10];
            return temp; 
        });

    std::cout << std::endl;
}