#include<iostream>
using namespace std;
int main() {
   double sales=95000;
   cout << "Sales: $" << sales << endl;

   double statetaxrate=.04;
   double statetax= sales* statetaxrate;
   cout << "State tax: $" << statetax << endl;

   double countytaxrate=.02;
   double countytax=sales*countytaxrate;
   cout << "Countytax: $" << countytax <<endl;
   
   double totaltax= statetaxrate+countytaxrate;
   cout << "Totaltax: $" << totaltax <<endl;
   return 0;

}