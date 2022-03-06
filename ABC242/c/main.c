#include <stdlib.h>

#define DIVIDER = 998244353

int **rec(int *arr, int n)
{
    if (n == 0)
        return (arr);

    int **arr2 = rec(arr, n - 1);
    arr2[1] = 2 * (arr[0] + arr[2]);
    arr2[2] = 2 * (arr[1] + arr[2] + arr[3]);
    arr2[3] = 2 * (arr[2] + arr[3] + arr[4]);
    arr2[4] = 2 * (arr[3] + arr[4] + arr[5]);
    arr2[5] = 2 * (arr[4] + arr[5]);

    return (arr2);
}

int main(int argc, char **argv)
{
    int n = atoi(argv[1]);

    int **arr;

    arr = malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        arr[i] = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
        arr[0][i] = 1;
}
