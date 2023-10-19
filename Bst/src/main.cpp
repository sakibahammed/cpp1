#include "binarysearchtree.h"
#include <iostream>

int main() {
    TreeType<int> tree;

    // Insert values into the binary search tree
    tree.InsertItem(5);
    tree.InsertItem(3);
    tree.InsertItem(8);
    tree.InsertItem(1);
    tree.InsertItem(4);
    tree.InsertItem(7);
    tree.InsertItem(9);
    tree.InsertItem(9);
    tree.InsertItem(9);


    if (tree.IsEmpty()) {
    std::cout << "The tree is empty." << std::endl;
} else {
    std::cout << "The tree is not empty." << std::endl;
}

    int items[] = {5, 3, 8, 1, 4, 7, 9, 2, 6, 10};

for (int i = 0; i < 10; i++) {
    tree.InsertItem(items[i]);
}


int length = tree.LengthIs();
std::cout << "The length of the tree is: " << length << std::endl;



int itemToRetrieve = 9;
bool found = false;

tree.RetrieveItem(itemToRetrieve, found);

if (found) {
    std::cout << itemToRetrieve << " was found in the tree." << std::endl;
} else {
    std::cout << itemToRetrieve << " was not found in the tree." << std::endl;
}


if (tree.IsEmpty()) {
    std::cout << "The tree is empty." << std::endl;
} else {
    std::cout << "The tree is not empty." << std::endl;
}

int itemToRetrieve = 13;
bool found = false;

tree.RetrieveItem(itemToRetrieve, found);

if (found) {
    std::cout << itemToRetrieve << " was found in the tree." << std::endl;
} else {
    std::cout << itemToRetrieve << " was not found in the tree." << stdendl;
}


tree.ResetTree(IN_ORDER);

int item;
bool finished = false;

std::cout << "In-order traversal of the tree: ";
while (!finished) {
    tree.GetNextItem(item, IN_ORDER, finished);
    if (!finished) {
        std::cout << item << " ";
    }
}

std::cout << std::endl;

tree.ResetTree(PRE_ORDER);

int item;
bool finished = false;

std::cout << "Pre-order traversal of the tree: ";
while (!finished) {
    tree.GetNextItem(item, PRE_ORDER, finished);
    if (!finished) {
        std::cout << item << " ";
    }
}

tree.ResetTree(POST_ORDER);

int item;
bool finished = false;

std::cout << "Post-order traversal of the tree: ";
while (!finished) {
    tree.GetNextItem(item, POST_ORDER, finished);
    if (!finished) {
        std::cout << item << " ";
    }
}


#include "binarysearchtree.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> sortedIntegers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example sorted sequence
    TreeType<int> bst; // Binary Search Tree

    // Function to create a balanced BST from a sorted sequence
    // Parameters: left index, right index, BST object
    void createBalancedBST(int left, int right, TreeType<int>& tree) {
        if (left > right) {
            return;
        }

        int mid = (left + right) / 2; // Find the middle element
        tree.InsertItem(sortedIntegers[mid]); // Insert into BST

        createBalancedBST(left, mid - 1, tree); // Recursively build the left subtree
        createBalancedBST(mid + 1, right, tree); // Recursively build the right subtree
    }

    // Call the function to create a balanced BST
    createBalancedBST(0, sortedIntegers.size() - 1, bst);

    // Print the tree to verify its structure (e.g., using an in-order traversal)

    return 0;
}


std::cout << std::endl;


std::cout << std::endl;


    // Print the tree
    std::cout << "In-order traversal of the tree: ";
    tree.ResetTree(IN_ORDER);
    int item;
    bool finished = false;
    while (!finished) {
        tree.GetNextItem(item, IN_ORDER, finished);
        if (!finished) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;

    // Search for an item in the tree
    int searchItem = 4;
    bool found = false;
    tree.RetrieveItem(searchItem, found);
    if (found) {
        std::cout << searchItem << " is in the tree." << std::endl;
    } else {
        std::cout << searchItem << " is not in the tree." << std::endl;
    }

    // Delete an item from the tree
    int deleteItem = 3;
    tree.DeleteItem(deleteItem);

    // Print the updated tree
    std::cout << "In-order traversal of the tree after deleting " << deleteItem << ": ";
    tree.ResetTree(IN_ORDER);
    finished = false;
    while (!finished) {
        tree.GetNextItem(item, IN_ORDER, finished);
        if (!finished) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
