#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }
    //kod
   int liczba = std::stoi(argv[1]);
   std::cout << "siema" << liczba;
   
    return 0;
}
