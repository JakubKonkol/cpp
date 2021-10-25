#include <iostream>
#include <string>
#include <s24406/student.h>
auto main() -> int 
{
	Student jakub = {
          "Jakub"     // imię
        , "Konkol"   // nazwisko
        , 24406       // numer indeksu
        , 1             // semestr
        , 6.0        // średnia ocen
    };
    /* auto Student::to_string() const -> std::string {
            std::cout << jakub.imie << ", ";
            std::cout << jakub.nazwisko << ", ";
            std::cout << jakub.indeks << ", ";
            std::cout << jakub.semestr <<", ";
            std::cout << jakub.srednia <<", ";

        };
        */
    //Student::to_string();
    std::cout << jakub.indeks;
   
  
    
}
