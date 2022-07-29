n = int(input())
s = 0
for x in range(1, 100000000):
    s = s + x
    if s >= n:
        break

print(s)
