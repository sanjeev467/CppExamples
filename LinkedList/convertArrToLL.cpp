#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1) // Node(data jo user dega, next node ka address)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = NULL;
    }
};

Node *convertArr2LL(vector<int> &array) // we cant return entire LL, so we return head means pointer to head kyuki head ka type NOde* hain
{
    // so head will always be first element of array which is arr[0]
    Node *head = new Node(array[0]);
    // next i need a mover which points to head
    Node *mover = head;
    // now iterate skip 1 element which is 0th index and start i from 1 and go till last

    for (int i = 1; i < array.size(); i++)
    {
        // we store arr[i] in a temp
        Node *temp = new Node(array[i]);
        // to create the link i need mover to point to next which point to temporary
        mover->next = temp;
        // now i want to move the mover to next node
        mover = temp;
    }

    return head;
}

int main()
{
    vector<int> array = {2, 4, 6, 8};
    Node *head = convertArr2LL(array);
    cout << head->data;

    return 0;
}