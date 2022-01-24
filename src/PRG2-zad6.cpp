#include <iostream>
#include <vector>
#include <string>
double srednia = 0.0;
struct Student{

    std::string imie;
    std::string nazwisko;
    std::vector<double> ocenki;

};


Student get_best_student(std::vector<Student> studs){
    std::vector<double> srednia2;

    for(auto i : studs){
        for( auto j : i.ocenki){
            srednia += j;
        }
        
    srednia/= i.ocenki.size();
    srednia2.push_back(srednia);
    }
    double max;
    int jakisint;
    
    for(unsigned long i=0; i<srednia2.size(); i++){
        if(srednia2[i]>max){
            max=srednia2[i];
            jakisint=i;
        }
    }
    return studs[jakisint];
}

auto main()->int{
    auto s1 = Student{"Jakub", "Konkol", {6,6,6,3,1,1,1}};
    auto s2 = Student{"Jakub", "Esser" ,{5,4,6.1,1,1,2}};
    auto s3 = Student{"Essownik", "Essowski", {6,6,6,6,3,1.4,2.5}};
    auto s4 = Student{"Karolina", "turboessowska",{1,2,2,5,1,5.5,5.5}};
    std::vector<Student> students = {s1, s2, s3, s4};
    std::cout<<"Najlepsza srednia "<< get_best_student(students).imie<<"\n";
    return 0;
}