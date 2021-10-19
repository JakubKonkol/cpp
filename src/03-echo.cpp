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
    if(pierwszy == "-n" && drugi != "-l" && drugi != "-r"){
        for(int i = 2; i < argc; ++i){
            std::cout << argv[i] << " ";

        }
    }
    else if(pierwszy == "-r"&&drugi != "-l" && drugi != "-n"){
        for (int i = argc; i>2; i--){
            std::cout << argv[i-1] << " ";
        }
    }
    else if(pierwszy == "-l" && drugi != "-r" && drugi !="-n"){
        for(int i = 2; i < argc; ++i){
            std::cout << argv[i] << "\n";

        }
    }
    else if(pierwszy == "-r" && drugi == "-l"){
            for(int i=argc;i>3;--i){
                std::cout << argv[i-1] << "\n";
            }
        }
    else if(pierwszy == "-r" && drugi == "-n"){
            for(int i=argc;i>3;--i){
                std::cout << argv[i-1] << " ";
            }
        }
    else{
        for(int i=1; i<argc; i++){
                std::cout << argv[i] << " ";
    }
    }
    
    //kod
    
   
   
    return 0;
}
