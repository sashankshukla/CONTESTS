n, k = map(int, input().split())
block_to_color, colors = {}, []
for _ in range(n):
    block, color = map(int, input().split())
    block_to_color[block] = color
    colors.append(color)

result = True
for i in range(1, n + 1):
    if block_to_color[i] != colors[i-1]:
        result = False
        break 

if result:
    print("Y")
else:
    print("N")
