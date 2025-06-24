#include <iostream>
using namespace std;

class Node
{
    public :
    int info;
    Node *leftchild;
    Node *rightchild;

    //constructor for the node class
    Node()
    {
       leftchild = nullptr; // initialize left child to null 
       rightchild = nullptr; // initialize right child to null 
    }
};

class BinaryTree
{
    public :
    Node *ROOT; // Pointer utama ke akar pohon (root node)

    BinaryTree() // constructor
    {
        ROOT = nullptr; // Initializing ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan Nilai: ";
        cin >> x;

        //step 1: Allocate memory for the new node
        Node *newNode = new Node();

        //step 2: assign value to the data field of new node
        newNode->info = x;
    }
}