#include<iostream>
using namespace std;

int sumOfDigits(int x){
    if(x<10){
        return x;
    }


    else{
        int lastDigit = x%10;
        int remainingDigits = x/10;

        return lastDigit + sumOfDigits(remainingDigits);
    }
}