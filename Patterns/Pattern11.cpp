//       1      1
//       12    21
//       123  321
//       12344321




#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int k = 0; k < 2 * (n - i - 1); k++)
        {
            cout << " ";
        }
        for (int p = i + 1; p > 0; p--)
        {
            cout << p;
        }
        cout << endl;
    }
}