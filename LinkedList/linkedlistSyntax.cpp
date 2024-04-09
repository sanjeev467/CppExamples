#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int value;
    Node *next;

    // constructor 👇
    Node(int data)
    {
        value = data; // yahan pe jo Node(int data) isme jab data koi aayega to wo value mein store ho jayegi
        // and next mein store hoga next pointer of a Node object to NULL or nullptr.
        next = NULL;
    }
};

int main()
{

    Node *n = new Node(1); // ye hum node object create kr rhe hain jisko value 1 de rhe hain ye  Node(int data)
    //
    cout << n->value << " " << n->next << endl; // -> is used to access a member of a class or struct through a pointer.

    return 0;
}