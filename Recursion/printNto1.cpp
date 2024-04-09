// print from n to 1
#include <iostream>
using namespace std;

void print(int i, int n)
{
    if (i<1)
    {
        return;
    }
    cout << i<< endl;
    print(i - 1, n);
}

int main()
{

    int n;
    cin >> n;

    print(n, n);
    // here ill give i and n same no so that it starts from end
    return 0;
}