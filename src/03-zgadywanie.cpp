#include <iostream>
#include <random>


auto main() -> int
{
    std :: random_device rd ;
    std :: uniform_int_distribution < int > random (1 , 100);
    int rand = random(rd);
    int podana_liczba;
    
    do{
    std::cout << "Podaj liczbe: ";
    std::cin >> podana_liczba;
    
    if (podana_liczba > rand){
    std::cout << "za duzo! ";
    }
    else if (podana_liczba < rand){
    std::cout << "za malo! ";
    }
    else if (podana_liczba == rand){
    std::cout << "idealnie!! ";
    }

    }while (podana_liczba != rand);

    return 0;
}
