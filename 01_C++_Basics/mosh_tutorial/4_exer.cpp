#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main (){
    short maxvalue=6;
     short minvalue=1;
    srand(time(0));
    short first= (rand() % (maxvalue-minvalue+1)) +minvalue;
    short second=(rand()% (maxvalue-minvalue+1))+ minvalue;
    cout<<"2 dice are rolled and the rondom numbers are: "<< first << ","<< second;
}

