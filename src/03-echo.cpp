//Jakub Konkol//
#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    std::string pierwszy = std::string{argv[1]};
    std::string drugi = std::string{argv[2]};
    if (argc == 0) {
        return 1;
    }
    if(pierwszy == "-n"){
        for(int i = 2; i < argc; ++i){
            std::cout << argv[i] << " ";

        }
    }
    else if(pierwszy == "-r"){
        for (int i = argc; i>2; i--){
            std::cout << argv[i-1] << " ";
        }
    }
    else if(pierwszy == "-l"){
        for(int i = 2; i < argc; ++i){
            std::cout << argv[i] << "\n";

        }
    }
    else if (pierwszy != "-r" || pierwszy != "-n" || pierwszy != "-l"){
        for(int i = 1; i < argc ; ++i){
            std::cout << argv[i] << " ";
        }
    }
    
    //kod
    
   
   
    return 0;
}
