a, b, c, x = map(int, input().split())

if x <= a:
    p = 1
elif a < x and x <= b:
    p = c / (b - a)
else:
    p = 0

print('{:.12f}'.format(p))
