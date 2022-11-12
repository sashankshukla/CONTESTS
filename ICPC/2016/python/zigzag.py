n = int(input())
seq = list(map(int, input().split()))
cur = [[1, 1]] # [[higher, lower]]

def find_max_higher(num):
    cur_max = 0
    for i in range(len(cur)):
        if seq[i] > num and cur[i][1] > cur_max:
            cur_max = cur[i][1]
    return cur_max

def find_max_lower(num):
    cur_max = 0
    for i in range(len(cur)):
        if seq[i] < num and cur[i][0] > cur_max:
            cur_max = cur[i][0]
    return cur_max

for i in range(1, len(seq)):
    higher = find_max_higher(seq[i]) + 1
    lower = find_max_lower(seq[i]) + 1
    cur.append([higher, lower])

res = 0
for a, b in cur:
    if a > res:
        res = a
    if b > res:
        res = b 

print(res)