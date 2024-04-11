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

        Node *temp = new Node(array[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

Node *removeHead(Node *head)
{
    if (head == NULL)

        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main()
{
    vector<int> array = {2, 4, 6, 8};
    Node *head = convertArr2LL(array);

    // removeHead
    head = removeHead(head);
    cout << head->data << endl;

    return 0;
}