// 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Car {
public:
    string name;
    int year;
    double price;
    double eng;
    Car(string n, int y, double p, double eng) :
        name(n),
        year(y),
        price(p),
        eng(eng)
    {}
};

ostream& operator<<(ostream& out, Car c) {
    out << c.year
        << " "
        << c.name
        << " "
        << c.eng
        << "L $"
        << c.price
        << endl;
    return out;
}

class A {
    vector<Car> cars;
public:
    A() {}
    void push_back(Car car) {
        cars.push_back(car);
    }
    Car operator[](int index) {
        return cars[index];
    }
    int size() {
        return cars.size();
    }
};

ostream& operator<<(ostream& out, A a) {
    for (int i = 0; i < a.size(); i++) {
        out << a[i];
    }
    return out;
}

int main() {
    A a;
    a.push_back(Car("Toyota Corolla", 2010, 9999.99, 1.7));
    a.push_back(Car("Honda Civic", 2014, 12999.99, 1.9));
    a.push_back(Car("VW Passat", 2017, 17999.99, 2.0));
    a.push_back(Car("UAZ 469", 1975, 999.99, 2.445));
    cout << a;
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
