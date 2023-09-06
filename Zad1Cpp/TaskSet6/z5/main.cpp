// Mateusz Ka³wa

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    std::vector<char> myList = { 'a', 'c', 'b', 'd', 'f', 'e', 'h', 'g' };

    auto compare = [&myList](const auto& l, const auto& r) {
        auto it_l = std::find(myList.begin(), myList.end(), l);
        auto it_r = std::find(myList.begin(), myList.end(), r);

        return it_l != myList.end() && it_r != myList.end() && it_l < it_r;
    };

    std::set<char, decltype(compare)> mySet({ 'a', 'a', 'a', 'g', 'c', 'b', 'f', 'h', 'c', 'e', 'd', 'e' }, compare);

    for (auto c : mySet)
        std::cout << c;

    return 0;
}