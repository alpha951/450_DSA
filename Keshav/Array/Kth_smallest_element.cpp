#include <bits/stdc++.h>
using namespace std;
int kthsmallest(int a[], int n, int k)
{
    int number = 0;
    sort(a, a + n);
    number = a[k - 1];

    return number;
}
int main()
{

    int a[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(a) / sizeof(int);
    int k;
    cin >> k;
    cout << kthsmallest(a, n, k);
    return 0;
}