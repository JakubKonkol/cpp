
#include <iostream>
#include <string>
#include <s24406/time.h>
auto Time::to_string() const -> std::string{
    if (HH < 24 && MM < 59 && SS < 59){
        return std::to_string(HH)+":"+std::to_string(MM)+":"+std::to_string(SS);
    }
    else if(HH >= 24){
        //nie moge przypisac HH bo funkcja jest const 
    }
    
    return "Invalid Time";
}
auto main() -> int {
    //uzycie Time nazwa = {godz, min, sek}
    Time TestTime = {22, 22, 23};
    std::cout << TestTime.to_string();



}