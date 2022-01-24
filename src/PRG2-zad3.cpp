#include <iostream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
auto dot_product()-> double{
    int input, in
    double iloczyn,temp,tmp;  
    vector<double> jeden;
    vector<double> dwa;
    cout<<"podaj wartosc pierwszego wektora: ";
    cin>>input;
    cout<<"podaj wektor: ";
    for(int i=0; i<input; i++){ 
        cin>>temp;
        jeden.push_back(temp);
    }
    cout<<"podaj wartosc drugiego wektora: ";
    cin>>in;
    cout<<"podaj wektor: ";
    for(int i=0; i<in; i++){ 
        cin>>tmp;
        dwa.push_back(tmp);
    }
    if(jeden.size()==dwa.size()){
        for (int i=0; i<jeden.size();i++){
            iloczyn+=jeden[i]*dwa[i];
        }
    }
    else{
        cout<<"cos nie tak";
        return 1;
    }
    return iloczyn;
}

auto main()->int{
    int x=dot_product();
    if(x!=1){
        cout<<"iloczyn wynosi: "<<x<< "\n";
    }
    return 0; 
}