#include<iostream>

using namespace std;

float set(float x, float r) {
    float m;
    m = x * r * r; 
    return m;
}

int main(){
    float r, x, m;
    x = 3.14;
    cout << "please enter number: ";
    cin >> r;
    m = set(x, r);
    cout << "The area of the circle is: " << m << endl;
    return 0;
}