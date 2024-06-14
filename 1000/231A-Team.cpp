#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, count = 0;
    cin >> n;
    while (n > 0)
    {
        int first = 0, second = 0, third = 0;
        cin >> first >> second >> third;
        if (first + second + third >= 2)
        {
            count++;
        }
        n--;
    }
    cout << count << endl;
    return 0;
}