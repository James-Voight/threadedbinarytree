#include "BST.h"
#include <iostream>

int main() {
    // Create a threaded binary search tree
    BST<int, std::string> threadedBST;

    // Insert values into the threaded binary search tree
    threadedBST.insert(24, "twenty-four");
    threadedBST.insert(77, "seventy-seven");
    threadedBST.insert(70, "seventy");
    threadedBST.insert(75, "seventy-five");
    threadedBST.insert(66, "sixty-six");
    threadedBST.insert(79, "seventy-nine");
    threadedBST.insert(68, "sixty-eight");
    threadedBST.insert(67, "sixty-seven");
    threadedBST.insert(69, "sixty-nine");
    threadedBST.insert(90, "ninety");
    threadedBST.insert(85, "eighty-five");
    threadedBST.insert(83, "eighty-three");
    threadedBST.insert(87, "eighty-seven");
    threadedBST.insert(65, "sixty-five");

    threadedBST.print();

    // Print the threaded binary search tree in inorder and reverse order
    std::cout << "Inorder Traversal:\n";
    threadedBST.printInorder();

    std::cout << "\n\nReverse Order Traversal:\n";
    threadedBST.printReverse();

    threadedBST.clear();

    system("pause");

    return 0;
}
