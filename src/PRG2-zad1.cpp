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

auto main() -> int{
    std::cout << "srednia to: " << average_of(liczby_rzeczywiste);
}