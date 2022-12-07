// 0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Point2 {
    int x, y;
public:
    Point2(int x, int y) :
        x(x),
        y(y)
    {}
    void print() const {
        cout << "("
            << x
            << ", "
            << y
            << ")\n"; // (x, y)\n
    }
};

class Point3 {
    int x, y, z;
public:
    Point3(int x, int y, int z) :
        x(x),
        y(y),
        z(z)
    {}
    void print() const {
        cout << "("
            << x
            << ", "
            << y
            << ", "
            << z
            << ")\n"; // (x, y, z)\n
    }
};

int main() {
    cout << 3 * 4 << endl; // 12
    Point2 p2(1, 2);
    p2.print();
    Point3 p3(1, 2, 3);
    p3.print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
