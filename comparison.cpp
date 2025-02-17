#include <iostream>
using namespace std;

int main() {
    int initNum, num;

    cout << "Enter a number ";
    cin >> initNum;

    do {
        
        cout << "Enter another number ";
        cin >> num;

        if (num < initNum) {
            cout << "The number is less than the initial number." << endl;
        } else if (num > initNum) {
            cout << "The number is greater than the initial number." << endl;
        }

    } while (num != initNum);
    cout << "Same number." << endl;

    return 0;
}