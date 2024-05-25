#include <iostream>
using namespace std;
int main() {
    int MAX_LENGTH = 20; 
    char firstName[MAX_LENGTH]; 
    char lastName[MAX_LENGTH]; 
    
    cout << "Enter your first name: ";
    cin >> firstName;

   
    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Your full name is: " << firstName << " " << lastName << endl;

    return 0;
}