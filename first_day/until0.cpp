#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<int> numbers;
    int num;

    while(true) {
        cout << "Enter a number. Enter 0 to end: ";
        cin >> num;
        if (num == 0) break;
        numbers.push_back(num);
    }

    cout << "The numbers are: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;

}