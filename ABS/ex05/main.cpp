#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;

    cin >> N >> A >> B;
    int all_sum = 0;
    for (int i = 0; i <= N; i++)
    {
        int num = i;
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (A <= sum && sum <= B)
            all_sum += i;
    }
    cout << all_sum << endl;
}
