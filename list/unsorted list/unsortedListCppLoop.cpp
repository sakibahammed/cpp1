#include<iostream>
using namespace std;


int main(){
    // using a a loop for inpput in the list
    const int listSize = 5;
    int unsortedList[listSize];

    cout<< "Enter values in the list";
    for(int i =0;i<listSize;i++){
        cin>>unsortedList[i];
    }

    // print values from the link list

    cout<<"Unsorted list";
    for(int i=0;i<listSize;i++){
        cout<<unsortedList[i]<<" ";
    }


    cout<<endl;

    return 0;
}