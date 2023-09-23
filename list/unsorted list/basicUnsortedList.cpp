#include<iostream>
using namespace std;

int main(){

    // create an unsorted list of integers ( an array )
    int unsortedList[5];

    // add items to the list


    unsortedList[0] = 4.2;
    unsortedList[1] = 422;
    unsortedList[2] = 423;
    unsortedList[3] = 424;
    unsortedList[4] = 425;


    // printing the items in the list 

    cout<<"Unsorted list : ";

    for(int i=0;i<5;i++){
        cout<<unsortedList[i]<<" ";
    }

    cout<<endl;
    return 0;


}