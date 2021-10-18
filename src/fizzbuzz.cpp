#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    //kod
    int liczba = std::stoi(argv[1]);
    for (int n=1; n<=liczba; n++){
    if (n%5!=0 && n%3!=0){
        std::cout << n << "\n";
        }
    if (n%3 == 0){
        std::cout << n <<" Fizz \n";    
        }
    else if (n%5 == 0){
        std::cout << n<< " Buzz \n";
    }
    else if (n%3== 0 && n%5==0){
        std::cout << n<<  " FizzBuzz \n";    
    }
}

    return 0;
}

