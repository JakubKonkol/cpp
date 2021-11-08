#include <iostream>
#include <string>

struct Time{
    enum time_of_day{
        rano, 
        dzien,
        wieczor,
        noc
    };
    int HH;
    int MM;
    int SS;
    auto Time_of_day() -> time_of_day;
    auto to_string() const -> std::string;
    auto to_string(time_of_day) -> std::string;
    auto next_hour() -> void;
    auto next_minute() -> void;
    auto next_second() -> void;
    auto IsValid() const -> bool;

};