// Mateusz Ka³wa

#include <iostream>

auto main() -> int
{
    auto fibo = [](int n, const auto& impl) {
        auto inner_fibo = [&impl](int m, const auto& self) {
            if (m <= 0) return 0;
            if (m == 1) return 1;
            return self(m - 1, self) + self(m - 2, self);
        };
        return inner_fibo(n, inner_fibo);
    };

    for (int i = 0; i <= 10; ++i) {
        std::cout << fibo(i, fibo) << " ";
    }
    std::cout << std::endl;

    return 0;
}