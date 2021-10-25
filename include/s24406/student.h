#include <iostream>
#include <string>

struct Student{
   std::string imie;
   std::string nazwisko;
   int indeks;
   int semestr;
   double srednia;
   auto to_string() const -> std::string;

};
