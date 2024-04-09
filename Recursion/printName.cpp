// print name n times
#include <iostream>
using namespace std;

void print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Done" << endl;
    print(1 + i, n);
}

int main()
{

    int n;
    cin >> n;
    // n is how many times done will be printed

    print(1, n);
    return 0;
}