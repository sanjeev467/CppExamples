#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "tree";
    map<char, int> occur;

    for (int i = 0; i < s.size(); i++)
    {
        occur[s[i]]++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << "occurrance of " << s[i] << " " << "is :" << occur[s[i]] << endl;
    }

    return 0;
}