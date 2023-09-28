#include <iostream>

class UnsortedList {
public:
    static const int maxSize = 5; // Maximum size of the list

    // Constructor
    UnsortedList() : size(0) {}

    // Member function to input values into the list using a loop
    void inputList() {
        if (size < maxSize) {
            std::cout << "Enter " << maxSize - size << " integers: ";
            for (int i = 0; i < maxSize - size; ++i) {
                std::cin >> list[size + i];
            }
            size += maxSize - size; // Update the size of the list
        } else {
            std::cout << "List is full. Cannot add more items." << std::endl;
        }
    }

    // Member function to print the items in the list
    void printList() const {
        std::cout << "Unsorted List: ";
        for (int i = 0; i < size; ++i) {
            std::cout << list[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    int list[maxSize]; // The array to store the list
    int size;         // Current size of the list
};

int main() {
    UnsortedList myList;

    myList.inputList(); // Input values into the list
    myList.printList(); // Print the items in the list

    return 0;
}
