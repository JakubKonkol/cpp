
#include <iostream>
#include <string>
#include <s24406/student.h>
auto Student::to_string() const -> std::string{
    return imie+" " + nazwisko+" "+std::to_string(indeks)+" "+std::to_string(semestr)+" " + std::to_string(srednia);
}
auto main() -> int 
{
    //uzycie: Student nazwa_ucznia = {"imie", "nazwisko", indeks, semestr, srednia ocen}  
    Student jakub = {"jakub", "Konkol", 24406, 1, 6.0};
    std::cout << jakub.to_string();
        
   
}

