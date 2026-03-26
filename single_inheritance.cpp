#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is Parent class\n";
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "This is Child class\n";
    }
};

int main() {
    Child obj;
    obj.show();
    obj.display();
}