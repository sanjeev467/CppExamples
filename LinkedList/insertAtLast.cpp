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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // temp move to the next
    }
    cout << endl;
}

Node *insertLast(Node *head, int value)
{

    if (head == NULL)
        return new Node(value);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // create a new node which points to null
    Node *newNode = new Node(value);
    // then make temp next pointing to the new node we made

    temp->next = newNode;

    return head;
}

int main()
{
    vector<int> array = {2, 4, 6, 8};
    Node *head = convertArr2LL(array);
    // function to insert element at tail
    head = insertLast(head, 9);
    print(head);

    return 0;
}