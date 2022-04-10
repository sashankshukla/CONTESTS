n = int(input())
left, right = [], []
for _ in range(n):
    time, direction = map(int, input().split())
    if direction == 0:
        left.append(time)
    else:
        right.append(time)

def move_left_pointer(cur_left_pointer, cur_date):
    new_left_pointer = cur_left_pointer
    while new_left_pointer < len(left) and left[new_left_pointer] <= cur_date:
        new_left_pointer += 1
    return new_left_pointer

def move_right_pointer(cur_right_pointer, cur_date):
    new_right_pointer = cur_right_pointer
    while new_right_pointer < len(right) and right[new_right_pointer] <= cur_date:
        new_right_pointer += 1
    return new_right_pointer

escalator_state, date, next_stop_time = "off", 0, -1        # state can be "off", "right", and "left"
left_pointer, right_pointer = 0, 0
while left_pointer < len(left) or right_pointer < len(right):
    if date == next_stop_time:
        next_stop_time = -1
        escalator_state = "off"

    if escalator_state == "off":
        if left_pointer < len(left) and right_pointer < len(right) and left[left_pointer] <= date and right[right_pointer] <= date:
            next_stop_time = date + 10
            if left[left_pointer] < right[right_pointer]:
                escalator_state = "left"
                left_pointer = move_left_pointer(left_pointer, date)
            else:
                escalator_state = "right"
                right_pointer = move_right_pointer(right_pointer, date)
        elif left_pointer < len(left) and left[left_pointer] <= date:
            next_stop_time = date + 10
            escalator_state = "left"
            left_pointer = move_left_pointer(left_pointer, date)
        elif right_pointer < len(right) and right[right_pointer] <= date:
            next_stop_time = date + 10
            escalator_state = "right"
            right_pointer = move_right_pointer(right_pointer, date)

    elif escalator_state == "right":
        if right_pointer < len(right) and right[right_pointer] <= date:
            next_stop_time = date + 10
            right_pointer = move_right_pointer(right_pointer, date)

    elif escalator_state == "left":
        if left_pointer < len(left) and left[left_pointer] <= date:
            next_stop_time = date + 10
            left_pointer = move_left_pointer(left_pointer, date)
            
    date += 1

print(next_stop_time)


