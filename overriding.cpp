#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Functioncdari base class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya Functioncdari derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}