// Nate 9-18-24
// firstLinkedList.cpp


#include <iostream>
using namespace std;


//Create a struct that will be the nodes of the linked lists
struct Node {
    string dataField;
    Node* pNext;
};

/* Create a function that will print the linked list.
The function will have one parameter, that will be a pointer. */
void printList (Node* pNode) {
    while (pNode != nullptr) {
        cout << pNode->dataField << " ";
        pNode = pNode->pNext;
    }
}


int main() {
    cout << "\nMy First Linked List Program!\n" << endl;

// Create a few pointers to Node.
    Node* pHead = new Node;
    Node* pSecond = new Node;
    Node* pThird = new Node;
    Node* pNext = new Node;

    /* Node myNewNode;
    myNewNode.dataField = "Data in my node struct.";

    cout << "stuff in my node: " << myNewNode.dataField << " "; */

// Fill the data fields of the nodes.
    pHead -> dataField = "z";
    pSecond -> dataField = "b";
    pThird -> dataField = "c";

// Create the list by linking the point.
    pHead->pNext = pSecond;
    pSecond->pNext = pThird;
    pThird->pNext = nullptr;

// Output the linked list and call the printList function.
cout << "This is my linked list... \n";
    printList(pHead);

// Add a few nodes to my linked list.
    Node* pCurrent = new Node;
    pCurrent -> dataField = "d";
    pCurrent -> pNext = pHead;
// Reposition head of the list.
    pHead = pCurrent;

// Test by calling printList
    cout << "\n\nThis is my new linked list!" << endl;
    printList(pHead);
    cout << endl;



    return 0;
}
