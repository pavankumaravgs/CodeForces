#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, x = 0;
    cin >> n;
    while (n > 0)
    {
        string statement;
        cin >> statement;
        if (statement[1] == '+')
        {
            x++;
        }
        else if (statement[1] == '-')
        {
            x--;
        }
        n--;
    }
    cout << x << endl;
    return 0;
}