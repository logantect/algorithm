a, r, n = map(int, input().split())

cnt = 1
s = a
while cnt != n:
    s = s * r
    cnt = cnt + 1

print(s, end=' ')
