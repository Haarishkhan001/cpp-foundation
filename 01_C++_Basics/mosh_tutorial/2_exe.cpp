#include <iostream>
using namespace std;
int main(){
    cout << "Fahrenheit:";
    double Farhenheit;
    cin >> Farhenheit;
    double celcius= (Farhenheit-32) /1.8;
    cout <<"Celcius:"<< celcius;
    return 0;
}