#include<iostream>
using namespace std;


int main(){


    int unsortedList[5];


    unsortedList[0] = 1;
    unsortedList[1] = 10;
    unsortedList[2] = 100;
    unsortedList[3] = 1000;
    unsortedList[4] = 10000;

    cout<<"Un sorted list";

    for(int i =0;i<5;i++){
        cout<<unsortedList[i]<<" ";
    }
    cout<<endl;

    return 0;
}