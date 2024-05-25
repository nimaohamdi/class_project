#include<iostream>

using namespace std;

int set(int a, int b) {
    int p;
    p = 2 * (a + b);
    return p;
}

int main(){
    int x, y, p;
    cout << "please enter two numbers: ";
    cin >> x >> y;
    p = set(x, y);
    cout << "The perimeter is: " << p << endl;
    return 0;
}