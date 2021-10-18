#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    int liczba = std::stoi(argv[1]);
    while(liczba >=0){
    std::cout << liczba << "\n";
    liczba--;
    }

    return 0;
}

