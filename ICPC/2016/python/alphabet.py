s = input()

longest = [1]

def cur_largest_smaller_than(char):
    cur_max = 0
    for i in range(len(longest)):
        if s[i] < char and longest[i] > cur_max:
            cur_max = longest[i]
    return cur_max

for i in range(1, len(s)):
    longest.append(1 + cur_largest_smaller_than(s[i]))

print(26 - max(longest))
