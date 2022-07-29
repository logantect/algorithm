n = int(input())
s = 0
for x in range(0, 1001):
    s = s + x
    if s >= n:
        print(x)
        break
