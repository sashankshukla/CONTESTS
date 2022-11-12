rows, cols = map(int, input().split())
matrix = []
for _ in range(rows):
    matrix.append(list(input()))

visited = [[False for _ in range(cols)] for _ in range(rows)]

def in_range(row, col):
    return row >= 0 and row < rows and col >= 0 and col < cols

def dfs(row, col):
    visited[row][col] = True
    if matrix[row][col] != "W":
        if in_range(row+1, col) and not visited[row+1][col]:
            dfs(row+1, col)
        if in_range(row-1, col) and not visited[row-1][col]:
            dfs(row-1, col)
        if in_range(row, col+1) and not visited[row][col+1]:
            dfs(row, col+1)
        if in_range(row, col-1) and not visited[row][col-1]:
            dfs(row, col-1)

islands = 0
for row in range(rows):
    for col in range(cols):
        if not visited[row][col] and matrix[row][col] == "L":
            islands += 1
            dfs(row, col)

print(islands)