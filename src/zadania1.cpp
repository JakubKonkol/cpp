#include <iostream>
#include <string>
auto is_palidrome() -> bool{
    
}
auto box_print(std::string pierwszy, std::string drugi, std::string trzeci, std::string czwarty, std::string piaty) -> void{
    for(int i=0;i<9;i++){
        std::cout << "*";
    }
    std::cout << "\n";
    std::cout << "* " << pierwszy << " *" << "\n";
    std::cout << "* " << drugi << " *" << "\n";
    std::cout << "* " << trzeci << " *" << "\n";
    std::cout << "* " << czwarty << " *" << "\n";
    std::cout << "* " << piaty << " *" << "\n";

    for(int i=0;i<9;i++){
        std::cout << "*";
    }
}
auto is_even(int x) -> bool{
if(x%2==0){
    return true;
}
else{
    return false;
}
}
int wybor;
auto zadanie1()-> void{
    for(int i=1;i<=2;i++){
        for(int i=2;i<=20;i++){
            int n=i;
            bool IsPrime=true;
            for(int j=2;j<n;j++){
                if(n%j==0)
                {
                    IsPrime=false;
                    break;
                }
            }
            if(IsPrime)
            {
                std::cout << n << " ";
            }
        }
        std::cout << "\n";
    }
    return;
}
auto zadanie2()-> void{
    std::string imie = "Jakub";
    double waga = 70;
    int wzrost = 169;

    std::cout << "Imie: " << imie << "\n"<<std::endl << "Waga: " << waga <<"kg"<< "\n"<<std::endl << "Wzrost: "<<  wzrost <<"cm"<< "\n"<< std::endl;
    return;
}
auto zadanie3()-> void{
    std::string pimie;
    std::string dimie;
    std::cout << "Podaj swoje pierwsze imie: ";
    std::cin >> pimie;
    std::cout << "Podaj swoje drugie imie: ";
    std::cin >> dimie;

    if(pimie.length()>dimie.length()){
        std::cout << "Pierwsze imie jest dluzsze od drugiego! \n";
    }
    if(pimie.length()<dimie.length()){
        std::cout << "Drugie imie jest dluzsze od pierwszego... \n";
    }
    if(pimie.length()==dimie.length()){
        std::cout << "imiona maja taka sama dlugosc. \n";
    }
    return;
}
auto zadanie4()-> void{
    std::string imiona[5] = {};
    int meskie = 0;
    int zenskie =0;
    for (int i=0; i<5;i++){
        std::cout <<"podaj imie: ";
        std::cin >> imiona[i];
    }
    for (int i=0; i<5;i++){
        if(imiona[i].back()=='a'){
            zenskie++;
        }
        else{
            meskie++;
        }
    }
    std::cout << "imion meskich: "<< meskie<<"\n";
    std::cout << "imion zenskich: "<< zenskie<<"\n";
    return;
}
auto zadanie5()-> void{
    if(is_even(4)){
        std::cout << "true";
    }
    return;
}
auto zadanie6()-> void{
    return;
}
auto zadanie7()-> void{
    return;
}
auto zadanie8()-> void{
    return;
}
auto zadanie9()-> void{
    return;
}
auto zadanie10()-> void{
    box_print("hello", "World", "in", "a", "frame");
    return;
}
auto main() -> int{
    std::cout << "wybierz nr zadanie (1-10): ";
    std::cin >> wybor;
    switch (wybor) {
        case 1:
            zadanie1();
            break;
        case 2:
            zadanie2();
            break;
        case 3:
            zadanie3();
            break;
        case 4:
            zadanie4();
            break;
        case 5:
            zadanie5();
            break;
        case 6:
            zadanie6();
            break;
        case 7:
            zadanie7();
            break;
        case 8:
            zadanie8();
            break;
        case 9:
            zadanie9();
            break;
        case 10:
            zadanie10();
            break;


    }
}