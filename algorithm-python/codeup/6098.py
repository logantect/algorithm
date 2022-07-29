board = []
for i in range(10):
    board.append([])
    x = list(map(int, input().split()))
    for j in range(10):
        board[i].append(x[j])

prev_y = 1
end = False
for x in range(1, 9):
    if end:
        break

    for y in range(prev_y, 9):
        if board[x][y] == 0:
            board[x][y] = 9
            prev_y = y

        elif board[x][y] == 2:
            board[x][y] = 9
            end = True
            break

        if board[x][y + 1] == 1:
            break

for i in range(10):
    for j in range(10):
        print(board[i][j], end=' ')
    print()
