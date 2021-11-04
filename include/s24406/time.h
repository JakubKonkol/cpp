#include <iostream>
#include <string>

struct s_time{
    int HH;
    int MM;
    int SS;
    auto next_hour() const -> void;
    auto next_minute() const -> void;
    auto next_second() const -> void;
    auto what_time() const -> void;
}




/*
class Hour{
    public:
    Hour(unsigned);
};
Hour::Hour(unsigned h)
    :value{h}
    {
        if (h > 23){
            throw std::out_of_range{"HH cannot exceed 23"};
        }
    } 
class Minute{
    public:
    Seconds(unsigned);
};
Minute::Minute(unsigned m)
    :value{m}
    {
        if (m > 59){
            throw std::out_of_range{"MM cannot exceed 59"};
        }
    } 

class Seconds{
    public:
    Seconds(unsigned);
};
Seconds::Seconds(unsigned s)
    :value{s}
    {
        if (s > 59){
            throw std::out_of_range{"SS cannot exceed 59"};
        }
    } 

*/
