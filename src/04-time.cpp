
#include <iostream>
#include <string>
#include <s24406/time.h>
auto Time::IsValid() const -> bool{
    if ((HH < 0 || HH >=24) || (SS < 0 || SS>59) || (MM < 0 || MM>59)){
        return false;
    }else{
        return true;
    }
}
//enum tu bedzie
auto Time::Time_of_day() -> Time::time_of_day{
    if(HH>6 && HH<=12){
        return time_of_day::rano;
    }if(HH>12 && HH<= 18){
        return time_of_day::dzien;
    }if(HH > 18 && HH<=22){
        return time_of_day::wieczor;
    }else{
        return time_of_day::noc;
    }
}
auto Time::to_string(time_of_day) -> std::string{
    if(Time::Time_of_day()==dzien){
        return "dzien";
    }if(Time::Time_of_day()==wieczor){
        return "rano";
    }if (Time::Time_of_day()==noc){
        return "noc";
    }if (Time::Time_of_day()==rano){
        return "rano";
    }
    else{
        return "cos nie tak";
    }
} 
//next_etc()
auto Time::next_hour() -> void{
    if(HH < 23){
        //HH=00 MM=00 SS=00
        HH++;
    }else{
        HH=0;
        
    }
    return;
}
auto Time::next_minute() -> void{
    if(MM<59){
        MM++;
    }else{
        MM=0;
    }
    return;
}
auto Time::next_second() -> void{
    if(SS<59){
        //MM+1 SS=0
        SS++;
    }else{
        SS=0;
    }
    return;
}

auto Time::to_string() const -> std::string{

    if (Time::IsValid()==true){
        if(HH>10 && MM>10 && SS>10){
            return std::to_string(HH)+":"+std::to_string(MM)+":"+std::to_string(SS)+"\n";
        }
        if(HH<10 && MM>10 && SS>10){
            //h+0
            return "0"+std::to_string(HH)+":"+std::to_string(MM)+":"+std::to_string(SS)+"\n";
        }
        if(HH>10 && MM<10 & SS>10){
            //m+0
            return std::to_string(HH)+":"+"0"+std::to_string(MM)+":"+std::to_string(SS)+"\n";
        }
        if(HH>10 && MM>10 && SS<10){
            //s+0
            return std::to_string(HH)+":"+std::to_string(MM)+":"+"0"+std::to_string(SS)+"\n";
        }
        if(HH<10 && MM<10 && SS>10){
            //h+0 m+0
            return "0"+std::to_string(HH)+":"+"0"+std::to_string(MM)+":"+std::to_string(SS)+"\n";
        }
        if(HH<10 && MM<10 && SS<10){
            //H+0 M+0 S+O
            return "0"+std::to_string(HH)+":"+"0"+std::to_string(MM)+":"+"0"+std::to_string(SS)+"\n";
        }
        if(HH>10 && MM<10&& SS<10){
            //M+0 S+0
            return std::to_string(HH)+":"+"0"+std::to_string(MM)+":"+"0"+std::to_string(SS)+"\n";

        }
    }
    else if(Time::IsValid()==false){
        return "Invalid Time \n";
    }
    
    return "";
}
auto main() -> int {
    //uzycie Time nazwa = {godz, min, sek}
    Time TestTime = {0, 0, 0};
    std::cout << TestTime.to_string();
    TestTime.next_hour();
    std::cout << TestTime.to_string();
    TestTime.next_minute();
    std::cout << TestTime.to_string();
    TestTime.next_second();
    std::cout << TestTime.to_string();
    //std::cout << TestTime.to_string(TestTime.time_of_day);
    

    



}