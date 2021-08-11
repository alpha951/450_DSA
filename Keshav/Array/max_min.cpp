// TIME COMPLEXITY O(N2)    it can be reduced to O(n)  and even to log(n) using sort()  function

#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n)
{
    int maximum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int cM;   // current maximum
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[j] > a[i])
    //         {
    //             cM = a[j];
    //         }
    //         else
    //         {
    //             cM = a[i];
    //         }
    //     }
    //     if (cM > maximum)
    //     {
    //         maximum = cM;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
    }

    return maximum;
}
int min(int a[], int n)
{
    int minimum = max(a, n);
    // int minimum = a[0];        for(){ if(minimum>=a[i]){minimum=a[i]}  }

    // for (int i = 0; i < n; i++)
    // {
    //     int cm; // current minimum
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[j] > a[i])
    //         {
    //             cm = a[i];
    //         }
    //         else
    //         {
    //             cm = a[j];
    //         }
    //     }
    //     if (cm < minimum)
    //     {
    //         minimum = cm;
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
    }
    return minimum;
}
int main()
{
    int a[] = {1, 8, 2, 6};
    int n = sizeof(a) / sizeof(int);

    cout << max(a, n) << endl;
    cout << min(a, n) << endl;
    return 0;
}
