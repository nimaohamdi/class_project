#include <iostream>
using namespace std;
int main() {
    int grades[10];
    int maxGrade, minGrade; 

    cout << "Please enter 10 math grades:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Grade " << (i + 1) << ": ";
        cin >> grades[i];
        
        if (i == 0 || grades[i] > maxGrade) {
            maxGrade = grades[i];
        }
        
        if (i == 0 || grades[i] < minGrade) {
            minGrade = grades[i];
        }
    }
    cout << "The maximum grade is: " << maxGrade << endl;
    cout << "The minimum grade is: " << minGrade << endl;

    return 0;
}