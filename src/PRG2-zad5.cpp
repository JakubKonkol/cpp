#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split(std::string x){
    std::string slowo;
    std::vector<std::string> vec;
    bool can_split = true;
    unsigned long i;
    for(i=0; i<x.size(); i++){
        if(x[i] == ' '){
            if(can_split){
            vec.push_back(slowo);
            slowo="";
            can_split=false;
            }
        
        }
    slowo+=x[i];
    can_split = true;
    }
    if (x.back()!= ' '){
        vec.push_back(slowo);
    }
    return vec;
}

auto main() -> int{
    std::string text = "ala ma kota";
    for(unsigned long i=0;i<split(text).size();i++){
        std::cout<<split(text)[i]<<", ";
    }
    std::cout<<" ";
    return 0;
}