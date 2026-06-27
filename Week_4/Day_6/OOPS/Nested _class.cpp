#include <iostream>
using namespace std;

class Outer {
public:
    void display() {
        cout << "Display from Outer class" << endl;
    }

    class Inner {
    public:
        void display() {
            cout << "Display from Inner class" << endl;
        }
    };
};

int main() {
    Outer outerObj;
    outerObj.display();

    Outer::Inner innerObj;
    innerObj.display();

    return 0;
}
