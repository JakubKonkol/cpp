#include <iostream>
#include <string>
#include <vector>
#include <numeric>
int wybor;
std::vector<float> liczby_rzeczywiste = {1,2,3,4,5,6,7,8,9,10};
std::vector<std::string> palindromy;
float srednia;
auto average_of(std::vector<float> vec) -> float{
    srednia = accumulate(vec.begin(), vec.end(), 0.0/ vec.size());
    srednia = srednia/vec.size();
    return srednia;

}
auto filter_palindromes() -> void{

}


auto zadanie1() -> void{
    std::cout << "srednia to: " << average_of(liczby_rzeczywiste);
}
auto main() -> int{
    std::cout << "wybierz nr zadanie (1-10): ";
    std::cin >> wybor;
    switch (wybor) {
        case 1:
            zadanie1();
            break;
        case 2:
            //zadanie2;

            break;
        case 3:
            //zadanie3();
            break;
        case 4:
            //zadanie4();
            break;
        case 5:
            //zadanie5();
            break;
        case 6:
            //zadanie6();
            break;
        case 7:
            //zadanie7();
            break;
        case 8:
            //zadanie8();
            break;
        case 9:
            //zadanie9();
            break;
        case 10:
            //zadanie10();
            break;


    }
}