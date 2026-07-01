#include <iostream>
using namespace std;

int main() {
    int savedPin = 1234;
    double accountBalance = 500.00;

    int enteredPin;
    double withdrawAmount;

    cout << "Enter your 4-digit PIN: ";
    cin >> enteredPin;

    if (enteredPin == savedPin) {
        cout << "PIN correct!" << endl;
        cout << "Enter amount to withdraw: $";
        cin >> withdrawAmount;

        if (withdrawAmount <= accountBalance) {
            cout << "Withdrawal successful! Please take your cash." << endl;
        } 
        else {
            cout << "Transaction denied: Insufficient funds." << endl;
        }
    } 
    else {
        cout << "Error: Incorrect PIN. Access denied." << endl;
    }

    return 0;
}