// Nate 9-22-24
// linkedList

#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;

 struct Node {
     int dataField;
     Node* pNext;
 };

// This function prints the link list
void printLinkedList (Node* pNode) {
    /* while the pointer node does not equal "nullptr", it will continue to print
    the value of each node to the console. */
    while (pNode != nullptr) {
        cout << pNode->dataField << " ";
        pNode = pNode->pNext;
    }
}

int main() {
    // Making new nodes
Node* pHead = new Node;
Node* pSecond = new Node;
Node* pThird = new Node;
Node* pFourth = new Node;

    // Assigning values to these nodes
pHead -> dataField = 1;
pSecond -> dataField = 2;
pThird -> dataField = 3;
pFourth -> dataField = 4;

    // Making pointers for each node to the next node.
pHead -> pNext = pSecond;
pSecond -> pNext = pThird;
pThird -> pNext = pFourth;
pFourth -> pNext = nullptr;

    // Print the linked list.
cout << "My linked list: ";
printLinkedList (pHead);

    // This function adds a new node at the end of the linked list.
Node* pFifth = new Node;
    // Assigning a value to the fifth node.
pFifth -> dataField = 5;
    //Adding a pointer from the fourth node to the fifth node.
pFourth -> pNext = pFifth;
    // Assigning the fifth node to point to a null value (to stop the list).
pFifth -> pNext = nullptr;
cout << "\nNew linked list: ";
printLinkedList (pHead);
    cout << endl;

    /* Replaces the pointer from the second node to the pointer from the third node
     Since the third node is being deleted. */
    pSecond -> pNext = pThird -> pNext;
    // Deleting third node from the linked list.
    delete pThird;
    cout << "New linked list with third integer removed: ";
    printLinkedList (pHead);





    return 0;
}

/* This function was an attempt to have a target value be found within the linked list to be removed.
 I couldn't get it to work :(

void deleteValue (int targetValue) {
    if (pHead != nullptr) {
        Node* currNode = pHead;
        if (pHead -> dataField == targetValue) {
            pHead = pHead -> pNext;
            delete currNode;
        }
        else {
            Node* prevNode = nullptr;

            while (currNode != nullptr && currNode -> dataField != targetValue) {
                prevNode -> pNext = currNode;
                currNode = currNode -> pNext;
            }
            if (currNode != nullptr) {
                prevNode-> pNext = currNode -> pNext;
                delete currNode;
            }
        }
    }
} */