n = int(input())
s = 0
for x in range(n + 1):
    if x % 2 == 0:
        s = s + x
print(s)
