n = 8
grid=[]
for _ in range(n):
    s=input()
    grid.append([1 if s[i] == '.' else 0 for i in range(n)])

occupiedCol = [0] * 8
occupiedDiag1 = [0] * 16
occupiedDiag2 = [0] * 16

def ways(row):
    if row == 8: return 1
    cnt = 0
    for col in range(8):
        if occupiedCol[col] or occupiedDiag1[row + col] or occupiedDiag2[row - col + 7] or not grid[row][col]:
            continue
        occupiedCol[col] = occupiedDiag1[row + col] = occupiedDiag2[row - col + 7] = 1
        cnt += ways(row + 1)
        occupiedCol[col] = occupiedDiag1[row + col] = occupiedDiag2[row - col + 7] = 0
    return cnt

print(ways(0))
