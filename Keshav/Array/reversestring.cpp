#include <bits/stdc++.h>
using namespace std;
string reverse(string s, int n)
{

    for (int i = 0; i <= n / 2; i++)
    {
        swap(s[i], s[n - 1 - i]);
    }
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    cout << n << endl;
    cout << reverse(s, n);
    return 0;
}