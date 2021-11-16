
#include <iostream>
#include <string>
#include <s24406/time.h>
//funkcja sprawdzajaca czy godzina jest poprawnie podana
auto Time::IsValid() const -> bool{
    if ((HH < 0 || HH >=24) || (SS < 0 || SS>59) || (MM < 0 || MM>59)){
        return false;
    }else{
        return true;
    }
}
// enum, timeofday itp
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
// funkcje next_hour/min/sec
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
//to_string
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
//operatory
Time::Time(int h, int m, int s){
    HH = h;
    MM = m;
    SS = s;
}
auto Time::operator+ (Time const& o) const -> Time{
    int h = HH;
    int m = MM;
    int s = SS;
    
    s += o.SS;
    if(s > 59){
        s  -= 60;
        m++;
    }
    m += o.MM;
    if(m>59){
        m -= 60;
        h++;
    }
    h += o.HH;
    if(h > 23){
        h -=24;
    }
    
    return Time(h, m, s);
}
auto Time::operator- (Time const& o) const -> Time{
    int h = HH;
    int m = MM;
    int s = SS;
    s -= o.SS;
    if(s < 0){
        s+= 60;
        m--;
    }
    m-= o.MM;
    if(m<0){
        m += 60;
        h--;
    }
    h -= o.HH;
    if(h<0){
        h+=24;
    }
    return Time(h,m,s);
}   
auto Time::operator< (Time const& o) const -> bool{
    if (HH < o.HH){
        return true;
    }
    if(HH != o.HH){
        return false;
    }
    if(MM < o.MM){
        return true;
    }
    if(MM !=o.MM){
        return false;
    }
    if(SS < o.SS){
        return true;
    }
    if(SS != o.SS){
        return false;
    }
    else{
        return false;
    }
}
auto Time::operator> (Time const& o) const -> bool{
    if(HH> o.HH){
        return true;
    }
    if(HH != o.HH){
        return false;
    }
    if(MM > o.MM){
        return true;
    }
    if(MM != o.MM){
        return false;
    }
    if(SS> o.SS){
        return true;
    }
    if(SS != o.SS){
        return false;
    }
    else{
        return false;
    }
}
auto Time::operator== (Time const& o) const -> bool{
    if(HH == o.HH && SS==o.SS && MM==o.MM){
        return true;
    }else{
        return false;
    }
}
auto Time::operator!= (Time const& o) const -> bool{
    if(HH != o.HH && SS!=o.SS && MM!=o.MM){
        return true;
    }
    else{
        return false;
    }
} 
//time_to_midnight
auto Time::count_seconds() const -> std::uint64_t{
    std::uint64_t seconds = 0;
    seconds += HH * 60 * 60;
    seconds += MM *60;
    seconds += SS;
    return seconds;
}
auto Time::count_minutes() const -> std::uint64_t{
    std::uint64_t minutes = 0;
    minutes += HH  *60;
    minutes += MM;
    return minutes;
}
auto Time::time_to_midnight() const -> Time{
    Time time;
    time.SS = 60-SS;

    if(time.SS > 0){
        time.MM = 59 - MM;
    }
    else{
        time.MM = 60-MM;
    }

    if(time.MM> 0){
        time.HH = 23 - HH;
    }
    else{
        time.MM = 24-MM;
    }
    return time;
}
//main()
auto main() -> int {
    //uzycie Time nazwa = {godz, min, sek}
    Time TestTime = {0, 0, 0};
    std::cout << "Godzina: " << TestTime.to_string();
    TestTime.next_hour();
    std::cout << "Godzina: " << TestTime.to_string();
    TestTime.next_minute();
    std::cout << "Godzina: " << TestTime.to_string();
    TestTime.next_second();
    std::cout << "Godzina: " << TestTime.to_string();
    std::cout <<"\n";
    std::cout << "Pora dnia: " << TestTime.to_string(Time::time_of_day()) << "\n";
    std::cout <<"\n";
    
    auto czas = Time(TestTime.HH,TestTime.MM,TestTime.SS);
    std::cout << "godzina przed dodaniem: " << czas.to_string();
    auto dodawanie = czas + Time(1,0,30);
    std::cout <<"godzina po dodaniu: "<< dodawanie.to_string();
    std::cout << "godzina przed odjeciem: " << czas.to_string();
    auto odejmowanie = czas - Time(1,0,30);
    std::cout << "godzina po odjeciu: " << odejmowanie.to_string(); 
    std::cout <<"\n";
    std::cout << "Godzina: " << TestTime.to_string();
    std::cout << "Czas do polnocy: " << TestTime.time_to_midnight().to_string();
    

}