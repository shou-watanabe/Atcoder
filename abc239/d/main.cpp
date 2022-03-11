#include <bits/stdc++.h>
using namespace std;

bool ft_is_prime(int nb)
{
    int div;
    int mod;

    if (nb == 2 || nb == 3 || nb == 2147483647)
        return (1);
    else if (nb < 2 || nb % 2 == 0)
        return (0);
    div = 3;
    mod = nb % div;
    while (mod != 0 && div < nb)
    {
        mod = nb % div;
        div += 2;
        if (div == nb)
            return (true);
    }
    return (false);
}

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;
    for (int i = A; i <= B; i++)
    {
        bool flag = true;
        for (int j = C; j <= D; j++)
            flag &= !ft_is_prime(i + j);
        if (flag)
        {
            cout << "Takahashi" << endl;
            return (0);
        }
    }
    cout << "Aoki" << endl;
    return (0);
}
