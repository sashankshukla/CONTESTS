s = input()

final_res = 1
final_start, final_end = 0, 0
# find largest red gain
red_lookup = [1 if s[0] == "R" else -1]
cur_start = 0
for i in range(1, len(s)):
    if s[i] == "R":
        if 1 + red_lookup[-1] >= 1:
            red_lookup.append(1 + red_lookup[-1])
        else:
            red_lookup.append(1)
            cur_start = i
    else:
        if red_lookup[-1] - 1 >= -1:
            red_lookup.append(red_lookup[-1] - 1)
        else:
            red_lookup.append(-1)
            cur_start = i
    if red_lookup[-1] > final_res:
        final_res, final_start, final_end = red_lookup[-1], cur_start, i


# find largest blue gain
blue_lookup = [1 if s[0] == "B" else -1]
cur_start = 0
for i in range(1, len(s)):
    if s[i] == "B":
        if 1 + blue_lookup[-1] >= 1:
            blue_lookup.append(1 + blue_lookup[-1])
        else:
            blue_lookup.append(1)
            cur_start = i
    else:
        if blue_lookup[-1] - 1 >= -1:
            blue_lookup.append(blue_lookup[-1] - 1)
        else:
            blue_lookup.append(-1)
            cur_start = i
    if blue_lookup[-1] > final_res or (blue_lookup[-1] == final_res and cur_start < final_start) or (blue_lookup[-1] == final_res and cur_start == final_start and i < final_end):
        final_res, final_start, final_end = blue_lookup[-1], cur_start, i
    

print(final_start + 1, final_end + 1)
