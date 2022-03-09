#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums.at(i);

    priority_queue<int> pq;
    for (int i = 0; i < N; i++)
        pq.push(nums.at(i));

    int A = 0;
    int B = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            A += pq.top();
        else
            B += pq.top();
        pq.pop();
    }

    cout << (A - B) << endl;
}
