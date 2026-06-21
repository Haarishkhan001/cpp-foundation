#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main (){
    short maxvalue=99;
     short minvalue=1;
    srand(time(0));
    short first= (rand() % (maxvalue-minvalue+1)) +minvalue;
    short second=(rand()% (maxvalue-minvalue+1))+ minvalue;
    cout<<":2 random numbers between 1 and 99 are: "<< first << ","<< second;
}