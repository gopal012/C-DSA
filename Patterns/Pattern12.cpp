//      1
//      23
//      456
//      78910
//      1112131415

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
}