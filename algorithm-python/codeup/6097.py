h, w = map(int, input().split())
n = int(input())

board = []
for i in range(h):
    board.append([])
    for j in range(w):
        board[i].append(0)

for i in range(n):
    l, d, x, y = map(int, input().split())
    x = x - 1
    y = y - 1
    if d == 0:
        for j in range(l):
            board[x][y + j] = 1
    else:
        for j in range(l):
            board[x + j][y] = 1

for i in range(h):
    for j in range(w):
        print(board[i][j], end=' ')
    print()
