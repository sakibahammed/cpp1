#include<iostream>
using namespace std;


double sumSeries(int n){
    if(n==0){
        return 1;
    }
    else{
        return 1 / pow(2,n)+sumSeries(n-1);
    }
}