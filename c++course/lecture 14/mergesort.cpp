#include <iostream>
using namespace std;
void merge(int a[], int b[], int c[], int s, int e)
{
    int i, j, k, m, n;
    i = s, j = m + 1, k = s;
    m = (s + e) / 2;
    while (i <= m and j <= e)
    {
        if (b[i] > c[j])
        {
            a[k++] = c[j++];
        }
        else
        {
            a[k++] = b[i++];
        }
    }
    while (i <= m)
    {
        a[k++] = b[i++];
    }
    while (j <= e)
    {
        a[k++] = c[j++];
    }
    
}

void mergesort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int m = (s + e) / 2;
    int b[100], c[100];
    for (int i = s; i <= m; i++)
    {
        b[i] = a[i];
    }
    for (int i = m + 1; i <= e; i++)
    {
        c[i] = a[i];
    }
    mergesort(b, s, m);
    mergesort(c, m + 1, e);
    merge(a, b, c, s, e);
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}