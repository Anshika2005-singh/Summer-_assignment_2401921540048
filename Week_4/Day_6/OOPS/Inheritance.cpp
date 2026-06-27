#include <iostream>
using namespace std;

class Box {
protected:
    double length, breadth;

public:
    Box(double l, double b) : length(l), breadth(b) {}

    double area() {
        return length * breadth;
    }
};

class Box3d : public Box {
private:
    double height;

public:
    
    Box3d(double l, double b, double h) : Box(l, b), height(h) {}

    double volume() {
        return area() * height; // Uses area() from base class
    }
    
    void displayResults() {
        cout << "Area: " << area() << endl;
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
    Box3d myBox(10, 5, 2);
    myBox.displayResults();
    return 0;
}
