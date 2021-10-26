#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 1) {
        return 1;
    }
    else{
    
    int y = std::stoi(argv[1]);
    if(y<0){
        std::cout << "Number is negative\n";
    }
    do{
        std::cout << y << " bottles of beer on the wall, " << y << " bottles of beer.\n";
        y--;
        std::cout << "Take one down, pass it aroud, " << y << " bottles of beer on the wall...\n";
    }while(y>0);
    std::cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store an but some more, 99 bottles of beer on the wall...\n";
    }            
    return 0;
}