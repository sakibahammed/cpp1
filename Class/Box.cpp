#include<iostream>
using namespace std;

class Box{
    public:
        int height, width,depth;
        float volume(int height,int width,int depth){
            int volume = height*width*depth;
            return volume;
        }
};



int main(){
    Box myBox;
    Box tahiaBox;


    myBox.height = 2;
    myBox.width = 3;
    myBox.width = 4;


    double volume = myBox.volume(2,3,4);
    cout<<" volume "<<volume<<endl;


}