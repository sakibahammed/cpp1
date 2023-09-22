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


// #include<iostream>
// using namespace std;


// int main(){
//     int  * dynamicArray = new int[4];
//     for (int i =0;i<4;i++){
//         dynamicArray[i] = i*10;
//     }


//     cout<<"Dynamic Array : ";
//     for(int i=0;i<4;i++){
//         cout<<dynamicArray[i]<<endl;
//     }



//     delete[] dynamicArray;




// }


// 2d dynamic array

#include<iostream>
using namespace std;
int main(){
    int numRows , numCols;


    cout<<"enter the number of rows";


    cin>>numRows;

    cout<<"enter the number of cols";
    cin>>numCols;

    char **charArray = new char*[numRows]; // dynamic allocate a 2d array;

    for(int i=0;i<numRows;++i){
        charArray[i] = new char[numCols];

    }

    // input strings


    cout<<"enter strings"<<"per line"<<endl;
    for(int i=0;i<numRows;++i){
        cin>>charArray[i];
    }


    cout<<"entered string"<<endl;

    for(int i=0;i<numRows;++i){
        cout<<charArray[i]<<endl;
    }


    delete [] charArray;
}


