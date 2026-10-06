#include <stdio.h>

int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int n = 6;
    int sum = 0, i, missing;

    for(i = 0; i < n - 1; i++)
    {
        sum = sum + a[i];
    }

    int total = n * (n + 1) / 2;

    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}
