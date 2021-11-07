#include <iostream>
#include <string>
struct Time{
    int HH;
    int MM;
    int SS;
    auto to_string() const -> std::string;
    auto next_hour() const -> void;
    auto next_minute() const -> void;
    auto next_second() const -> void;
    auto IsValid() const -> bool;

};