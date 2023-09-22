#include<iostream>
using namespace std;


int main(){
    int * dynamicInt = new int;// Alllocating memory for and integer
    * dynamicInt = 14; // assignning the value


    cout<<"New dynamic int : "<< *dynamicInt<<endl;

    delete dynamicInt; // deallocating the memory
    return 0;
}
