#include <stdio.h>
int count(int a[], int n, int b[], int k);
void main()
{
    int a[100], n, k, b[100], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    k = a[0];
    for (i = 0; i < n; i++)
        if (k < a[i])
            k = a[i];
    count(a, n, b, k);
    for (i = 0; i < n; i++)
        printf("%d\t", b[i]);
}
int count(int a[], int n, int b[], int k)
{
    int i, j, c[k + 1],b;
    for (i = 0; i < k+1 + 1; i++)
        c[i] = 0;
    for (j = 0; j < n; j++)
        c[a[j]] = c[a[j]] + 1;
    for (i = 1; i < k + 1; i++)
        c[i] = c[i] + c[i - 1];
    for (j = n - 1; j >= 0; j--)
        b[c[a[j]] - 1] = a[j];
       c[a[j]] = c[a[j]] - 1;
   // return b;
}