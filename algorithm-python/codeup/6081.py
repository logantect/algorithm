n = int(input(), 16)
for i in range(1, int('F', 16) + 1):
    print('%X' % n, '*%X' % i, '=%X' % (n * i), sep='')
