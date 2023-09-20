#include<iostream>
using namespace std;

class MyClass {
public:
    // Data members (attributes)
    int myInteger;
    double myDouble;

    // Member functions (methods)
    void printValues() {
        // std::cout << "Integer: " << myInteger << ", Double: " << myDouble << std::endl;

        cout<<"Integer : "<<myInteger<<" , Double"<<myDouble<<endl;

    }
};

int main() {
    // Creating objects of MyClass
    MyClass obj1;
    MyClass obj2;

    // Accessing and setting data members
    obj1.myInteger = 42;
    obj1.myDouble = 3.14;

    obj2.myInteger = 7;
    obj2.myDouble = 2.71;

    // Calling member functions
    obj1.printValues();
    obj2.printValues();

    return 0;
}
