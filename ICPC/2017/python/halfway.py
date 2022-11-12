n = int(input())

def comparisons(length):
    return (length * (length-1)) // 2

operations = comparisons(n)
halfway = operations // 2
from_end = halfway + 1

l, r = 1, n
while l <= r:
    m = l + (r - l) // 2
    length_to_end = n - m + 1
    num_comparisons = comparisons(length_to_end)
    if num_comparisons == from_end:
        print(m)
        break 
    elif num_comparisons > from_end and comparisons(length_to_end - 1) < from_end:
        print(m)
        break
    elif num_comparisons > from_end:
        l = m + 1
    else:
        r = m - 1


