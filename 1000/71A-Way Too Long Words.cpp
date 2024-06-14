#include <bits/stdc++.h>
using namespace std;


string abbreviateWord(string word)
{
    return word.length() > 10 ? word[0] + to_string(word.length()-2) + word[word.length() - 1] : word;
}

int main()
{
    int n = 0;
    cin >> n;
    while (n > 0)
    {
        string word;
        cin >> word;
        cout << abbreviateWord(word)<<endl;
        n--;
    }
    return 0;
}