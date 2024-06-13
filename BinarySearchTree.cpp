#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
        string info;
        Node* leftchild;
        Node* rightchild;

        // Constructor for the node class
        Node(string i, Node* l, Node* r)
        {
            info = i;
            leftchild = l;
            rightchild = r;

        }
};
class BinaryTree 
{
    public: 
    Node* ROOT;

    BinaryTree()
    {
        ROOT= nullptr; //Initializing ROOT to null
    }
    void insert (string element) // Insert a node in the binary search tree
    {
        Node* newNode = new Node(element, nullptr,  nullptr); //Alocate memory for the new node
        newNode->info = element; //Assign value to the data field of the new mode 
        newNode->leftchild = nullptr; // Make the left child of the new node poin to NULL
        newNode->rightchild = nullptr; // Make the right child of the new node poin to NULL

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search (element, parent, currentNode);

         if (parent == nullptr) // if the parent is NULL (Tree is empty)
        {
        ROOT = newNode; //Mark the new node as ROOT 
        return; //Exit
        }
         if (element < parent ->info) // if the value in the data field of the new node is less than thaht of the 
         {
            parent->leftchild = newNode; // Make the left child of the parent point to the new node 
         }
    else if (element > parent ->info) // If the value in the data field of  the new node is greater then that 
        {
            parent->rightchild = newNode; // Make the right child of the parent point the new node 
        }
    }

    void search (string element, Node*& parent, Node*& currentNode)
    {
        // This function searches the currentNode of the specified Node as well as the current Node of its pare
        currentNode = ROOT;
        parent = NULL;
        while ((currentNode != NULL) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element<currentNode->info)
            currentNode = currentNode->rightchild;
        }
    }

       
