#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }
    int x = 1;
    int z = 5;
    auto const Bottles = std::string{argv[1]};
    std::cout << Bottles + 2;

