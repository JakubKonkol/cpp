#include <iostream>
#include <vector>
#include <string>
struct Student{

    std::string imie;
    std::string nazwisko;
    std::vector<double> ocenki;

};
struct Group{
    std::string NazwaGrupy;
    std::vector<Student> Studenci;
}; 

auto dodaj(Group& group, Student& stud) -> void{
    group.Studenci.push_back(stud);   
}

auto main() -> int{
    auto s1 = Student{"Jakub", "Konkol", {6,6,6,3,1,1,1}};
    auto s2 = Student{"Jakub", "Esser" ,{5,4,6.1,1,1,2}};
    auto s3 = Student{"Essownik", "Essowski", {6,6,6,6,3,1.4,2.5}};
    auto s4 = Student{"Karolina", "turboessowska",{1,2,2,5,1,5.5,5.5}};
    
    auto group = Group{"group", {s1}};
    dodaj(group, s2);
    dodaj(group, s3);
    dodaj(group, s4);
    
    std::cout<<"Studenci w grupie: ";
    for(auto i : group.Studenci){
        std::cout<<i.imie<<" "<<i.nazwisko<<", ";
    }
    std::cout<<"\n";
    return 0;
}
    
    
