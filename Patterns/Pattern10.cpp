//   1
//   01
//   101
//   0101
//   10101

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}