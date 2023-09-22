#include<iostream>
using namespace std;

class UnsortedType{
    public:
        UnsortedType();
        void MakeEmpty();
        bool length();
        int lengths();
        void insertItems();
        void deleteItems();
        void retriveItems();
        void resetList();
        void getNExtItems(Itemtypes& , bool&);


    private:
        int length;
        // ItemTypes_info(Max_ITems);
        int currentPos;

};






int main(){
    
}