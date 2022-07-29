board = []
for i in range(19):
    board.append([])
    x = list(map(int, input().split()))
    for j in range(19):
        board[i].append(x[j])

n = int(input())
for i in range(n):
    x, y = map(int, input().split())
    for k in range(19):
        if board[k][y - 1] == 0:
            board[k][y - 1] = 1
        else:
            board[k][y - 1] = 0

        if board[x - 1][k] == 0:
            board[x - 1][k] = 1
        else:
            board[x - 1][k] = 0

for i in range(19):
    for j in range(19):
        print(board[i][j], end=' ')
    print()
