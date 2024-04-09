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

Node *convertArr2LL(vector<int> &array)
{

    Node *head = new Node(array[0]);
    Node *mover = head;

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

int lengthOfLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    vector<int> array = {2, 4, 6, 8};
    Node *head = convertArr2LL(array);
    // cout << head->data;

    // traverse
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // temp move to the next
    }
    cout << endl;
    cout << "LengthOfLL" << endl;
    cout << lengthOfLL(head);

    return 0;
}