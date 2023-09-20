#include<iostream>
using namespace std;

int sum(int a,int b){
    int sum = 0;
    for(int i=a;i<=b;i++){
        sum = sum+i;
        
    }
    return sum;
}

int main(){
    int number1 ,number2;
    cout<<"Can you enter number1 & number2"<<endl;

    cin>>number1;
    cin>>number2;

    int result = sum(number1 , number2);
    cout<<"total sum from "<<number1<<"to"<<number2<<"is "<<result<<endl;
}