#include <iostream>
using namespace std;
class areac {
private:
    float a;

public:
    void set_a(float r) {
        a = r * r * 3.14;
    }

    float get_a() {
        return a;
    }
};

int main() {
    int r;
    float area_of_circle;

    cout << "please enter r:";
    cin >> r;

    areac c;
    c.set_a(r);

    area_of_circle =c.get_a();

   cout <<"Masahat:"<< area_of_circle <<endl;

    return 0;
}