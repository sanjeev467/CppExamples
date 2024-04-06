#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter n :" << endl;
    cin >> n;

    int arr[n];

    cout << "Array input" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements output" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}