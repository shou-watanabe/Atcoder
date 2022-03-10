#include <bits/stdc++.h>
using namespace std;

void print_by_big(vector<int> nums, int num, int offset)
{
}

int main()
{
    int N, op, num, offset;
    vector<int> nums;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> op >> num >> offset;
        switch (op)
        {
        case 1:
            nums.push_back(num);
        case 2:
            nums.push_back(num);
        case 3:
            nums.push_back(num);
        default:
            exit(0);
        }
    }
}
