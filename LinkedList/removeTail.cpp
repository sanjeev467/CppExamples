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

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)

        return NULL;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

int main()
{
    vector<int> array = {2, 4, 6, 8};
    Node *head = convertArr2LL(array);

    // remove tail
    head = removeTail(head);
    print(head);

    return 0;
}