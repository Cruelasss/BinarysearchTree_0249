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
        