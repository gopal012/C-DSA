// ****
// ****
// ****
// ****

// POINT TO REMEMBER - IN PATTERN QUESTIONS WE USE I LOOP FOR PRINTING ROW AND J LOOP FOR PRINTING COLUMN. SO TRY TO THINK LOGIC IN THAT WAY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Value of n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}