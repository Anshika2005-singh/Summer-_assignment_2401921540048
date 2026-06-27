#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}

    
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }
    
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};
