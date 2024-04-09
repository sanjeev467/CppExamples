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
};

int main()
{
    vector<int> array = {2, 4, 6, 8};
    Node *y = new Node(array[0], nullptr); // new gives pointer to mem loc and we can store it
    cout << y;                             // the pointer to mem loc is stored in y

    // if i dont use new keyword
    // Node y = Node(array[0], nullptr);
    // cout << y.data; // but now cout y gives erroe because y is an object so we can either take data from it and than print it
    //  like cout<<y.data; so it gves 2 cause arr[0] gives 2
    return 0;
}