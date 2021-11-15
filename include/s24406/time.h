#include <iostream>
#include <string>

struct Time{
    enum time_of_day{
        rano, 
        dzien,
        wieczor,
        noc
    };
    Time() = default;
    Time(int,int,int);
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
    auto operator + (Time const&) const -> Time;
    auto operator - (Time const&) const -> Time;
    auto operator < (Time const&) const -> bool;
    auto operator > (Time const&) const -> bool;
    auto operator == (Time const&) const -> bool;
    auto operator != (Time const&) const -> bool;
    auto count_seconds() const -> std::uint64_t;
    auto count_minutes() const -> std::uint64_t;
    auto time_to_midnight() const -> Time;


};