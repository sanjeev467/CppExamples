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

Node *insertBeforeValue(Node *head, int element, int value) // means inserting an element before a element in ll
{

    if (head == NULL)
        return NULL;

    if (head->data == value)
    {
        return new Node(element, head);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == value)
        {
            Node *x = new Node(element, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> array = {12, 5, 8, 7};
    Node *head = convertArr2LL(array);
    // function to insert element
    head = insertBeforeValue(head, 100, 5);
    print(head);

    return 0;
}