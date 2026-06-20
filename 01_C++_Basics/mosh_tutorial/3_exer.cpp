#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout << " Enter the radius:";
    double radius;
    cin >> radius;
    double pi=3.14;
    double area= pi* pow(radius , 2);
    cout << "Area will be: " << area;
    return 0;
}