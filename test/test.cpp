#include <iostream>

class Base {
public:
    Base() { std::cout << "Base constructor" << std::endl; }
    // Without the 'virtual' keyword for the destructor
     ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derived : public Base {
public:
    int *i = new int;
    Derived() { std::cout << "Derived constructor" << std::endl; }
    ~Derived() {
      delete i;
       std::cout << "Derived destructor" << std::endl;
       }
};

int main() {
    Base* basePtr = new Derived(); // Using a base class pointer to a derived class object
    delete basePtr; // Calls the base destructor only (no 'virtual' keyword)

    return 0;
}
