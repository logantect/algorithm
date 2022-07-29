n = int(input())
a = input().split()

for i in range(n):
    a[i] = int(a[i])

m = a[0]
for i in range(n):
    m = m if m < a[i] else a[i]
print(m)
