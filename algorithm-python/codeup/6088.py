a, d, n = map(int, input().split())

cnt = 1
s = a
while cnt != n:
    s = s + d
    cnt = cnt + 1

print(s, end=' ')
