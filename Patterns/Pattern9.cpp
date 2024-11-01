//      *
//      **
//      ***
//      ****
//      ***
//      **
//      *

// Assuming n = 4 for this pattern
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = n; j > i - n + 1; j--)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}