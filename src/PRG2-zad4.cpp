#include <iostream>
#include <vector>
#include <string>
int suma;
double wynik;

struct student{
	std::string imie;
	std::string nazwisko;
	std::vector<int>oceny;
	
};
auto average_of(std::vector<int>vec)-> double{
	
	for(unsigned long i=0; i<vec.size(); i++ )
	{
		suma+=vec[i];
	}
	wynik=suma/vec.size();
	return wynik;
}
auto main() -> int{
    std::vector<int> ocenki = {5,6,5};
    student Jakub = {"jakub", "Konkol", ocenki};
    std::cout << average_of(Jakub.oceny);
}
