#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello World" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << 1 + i - j;
        }
        cout << endl;
    }

    return 0;
}