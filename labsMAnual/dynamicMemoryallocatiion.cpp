// #include<iostream>
// using namespace std;


// int main(){
//     int * dynamicInt = new int;// Alllocating memory for and integer
//     * dynamicInt = 14; // assignning the value


//     cout<<"New dynamic int : "<< *dynamicInt<<endl;

//     delete dynamicInt; // deallocating the memory
//     return 0;
// }



// dynamic memory allocation using array


#include<iostream>
using namespace std;


int main(){
    int  * dynamicArray = new int[4];
    for (int i =0;i<4;i++){
        dynamicArray[i] = i*10;
    }


    cout<<"Dynamic Array : ";
    for(int i=0;i<4;i++){
        cout<<dynamicArray[i]<<endl;
    }



    delete[] dynamicArray;

    


}


