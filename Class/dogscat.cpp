#include<iostream>
using namespace std;



class  Dog{
    public: 
        string name;
        int age;


        void bark(){
            cout<<name<<"says woof"<<endl;
        }
};

class Cat{
    public:
    string name;

    void meow(){
        cout<<name<<" sayss Mewo"<<endl;
    }
};


int main(){
    Dog myDog;
    Dog anotherDog;



    myDog.name = "buddy";
    anotherDog.name ="max";


    myDog.bark();
    anotherDog.bark();
    Cat myCat;
    myCat.name = "pussy";
    myCat.meow();

    return 0;
}