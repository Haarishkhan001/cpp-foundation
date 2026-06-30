#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score (0-100): ";
    cin >> score;

    if (score >= 90) {
        cout << "Excellent! You got an A." << endl;
    }
    else if (score >= 80) {
        cout << "Great job! You got a B." << endl;
    }
    else if (score >= 70) {
        cout << "Good effort! You got a C." << endl;
    }
    else {
        cout << "You need to study more. You got an F." << endl;
    }

    return 0;
}