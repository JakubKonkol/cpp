#include <iostream>
#include <string>
#include <s24406/time.h>
auto Time::to_string() const -> std::string{
    if (HH < 24 && MM < 59 && SS < 59){
        return "pomps";
    }
    else if{
        return "";
    }
    
}
auto main() -> int {
    //uzycie s_time nazwa = {godz, min, sek}
    s_time TestTime = {21, 22, 23};



}