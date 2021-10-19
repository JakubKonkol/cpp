#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    auto const Bottles = std::string{argv[1]};
    std::cout << Bottles;

