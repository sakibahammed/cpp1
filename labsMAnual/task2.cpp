#include<iostream>
using namespace std;


class MyClass{
    public:
    // construtor
    MyClass();


    //Destructor
    ~MyClass();


    void allocation(int a);
    void setValue(int index , int value);


    void printArray() const;

    private: 
    int *dynamicArray;
    int size;
};