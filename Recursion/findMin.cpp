#include<iostream>
using namespace std;

int findMin(int arr[] , int size){
    if(size == 1){
        return arr[0];
    }

    int minInArray = findMin(arr +1,size -1);
    if(arr[0]<minInArray){
        return arr[0];
    }

    else{
        return minInArray;
    }

}