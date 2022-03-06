def rec(n):
    if n == 1:
        return [1 for _ in range(9)]
    arr = rec(n - 1)
    arr2 = [1 for _ in range(9)]
    arr2[0] = arr[0] + arr[1]
    arr2[1] = arr[0] + arr[1] + arr[2]
    arr2[2] = arr[1] + arr[2] + arr[3]
    arr2[3] = arr[2] + arr[3] + arr[4]
    arr2[4] = arr[3] + arr[4] + arr[5]
    arr2[5] = arr[4] + arr[5] + arr[6]
    arr2[6] = arr[5] + arr[6] + arr[7]
    arr2[7] = arr[6] + arr[7] + arr[8]
    arr2[8] = arr[7] + arr[8]
    return arr2


N = int(input())
MOD = 998244353
cnt = 0
arr = [1 for _ in range(9)]
arr = rec(N)
for i in range(9):
    cnt += arr[i]

if cnt < MOD:
    print(cnt)
else:
    print(cnt % MOD)
