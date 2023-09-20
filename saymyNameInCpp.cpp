#include<iostream>
using namespace std;

void sayMyName(string name){
    cout<<"You are "<<name<<" I know you"<<endl;
    // function that doesnt return anything return a void function
}

int main(){
    string naam;
    cout<<"Who are you? ";
    cin>>naam;
    sayMyName(naam);
}