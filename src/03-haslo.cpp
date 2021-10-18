#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    auto const haslo = std::string{argv[1]};
    std::string PodaneHaslo = "";
    do{
        std::cout << "Podaj haslo: ";
        std::cin >> PodaneHaslo;
        if(PodaneHaslo == haslo){
         std::cout << "Dobrze! ";        
         }

      }while(haslo != PodaneHaslo);
    return 0;
}
