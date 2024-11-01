//          *
//         ***
//        *****
//       *******
//      *********
//      *********
//       *******
//        *****
//         ***
//          *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = i; j < n - 1; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2 * i + 1; k++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = n; j < i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2 * (2 * n - i) - 1; k++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}