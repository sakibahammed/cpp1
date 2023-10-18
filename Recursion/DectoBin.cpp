#include<iostream>
using namespace std;


void DectoBin(int dec){
    if(dec>0){
        DectoBin(dec / 2);
        cout<< dec%2;
    }
}