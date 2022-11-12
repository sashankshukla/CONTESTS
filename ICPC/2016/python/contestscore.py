n, k = map(int, input().split())
stack = []
res = 0
cur_time = 0
for _ in range(k):
    stack.append(int(input()))

for _ in range(n-k):
    cur_time += min(stack)
    res += cur_time
    stack.remove(min(stack))
    stack.append(int(input()))

for _ in range(k):
    cur_time += min(stack)
    res += cur_time
    stack.remove(min(stack))

print(res)
