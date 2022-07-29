a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

min_number = a if (a < b) else b
print(min_number if (min_number < c) else c)
