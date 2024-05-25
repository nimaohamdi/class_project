#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    switch (number) {
        case 100:
            cout << "100";
            break;
        case 200:
            cout << "200";
            break;
        default:
            cout << "no";
            break;
    }

    return 0;
}