rows, cols = map(int, input().split())
matrix = []
for _ in range(rows):
    matrix.append(list(input()))

for col in range(cols):
    something_moved = True
    while something_moved:
        something_moved = False
        for row in range(rows-1):
            if matrix[row][col] == "o" and matrix[row+1][col] == ".":
                matrix[row][col], matrix[row+1][col] = matrix[row+1][col], matrix[row][col]
                something_moved = True 

for row in matrix:
    print("".join(row))
