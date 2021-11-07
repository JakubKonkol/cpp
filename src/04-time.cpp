
#include <iostream>
#include <string>
#include <s24406/time.h>
auto Time::IsValid() const -> bool{
    if ((HH < 0 || HH >=25) || (SS < 0 || SS>60) || (MM < 0 || MM>60)){
        return false;
    }else{
        return true;
    }
}
auto Time::next_hour() const -> void{
    if(HH == 24){
        //HH=00 MM=00 SS=00
    }
    return;
}
auto Time::next_minute() const -> void{
    if(MM==60){
        //hh++ mm=00 ss=00
    }
    return;
}
auto Time::next_second() const -> void{
    if(SS==60){
        //MM+1 SS=0
    }
    return;
}
auto Time::to_string() const -> std::string{

    if (Time::IsValid()==true){
        return std::to_string(HH)+":"+std::to_string(MM)+":"+std::to_string(SS);
    }
    else if(Time::IsValid()==false){
        return "Invalid Time";
    }
    
    return "Invalid Time";
}
auto main() -> int {
    //uzycie Time nazwa = {godz, min, sek}
    Time TestTime = {23, 59, 59};
    std::cout << TestTime.to_string();
    



}