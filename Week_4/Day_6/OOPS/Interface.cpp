#include <iostream>
using namespace std;


class Test {
public:
    virtual void square(int n) = 0; 
};


class Arithmetic : public Test {
public:
    void square(int n) override {
        cout << "Square of " << n << " is: " << (n * n) << endl;
    }
};


class ToTestInt {
public:
    void run() {
        Arithmetic obj;
        obj.square(5);
    }
};

int main() {
    ToTestInt tester;
    tester.run();
    return 0;
}
