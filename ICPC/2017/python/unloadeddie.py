probabilities = list(map(float, input().split()))

# return new number
def calculate_new_amount(dice_amounts, probabilities, final_probability):
    res = 0
    for i in range(5):
        res += dice_amounts[i] * probabilities[i]
    if not final_probability:
        return float("inf")
    final_amount = (3.5 - res) / final_probability
    return round(final_amount, 3)


dice_amounts = [1, 2, 3, 4, 5, 6]
minimum_difference = float("inf")
for i in range(6):
    original = i+1
    other_dice_amounts = dice_amounts[:i] + dice_amounts[i+1:]
    other_probabilities = probabilities[:i] + probabilities[i+1:]
    new_amount = calculate_new_amount(other_dice_amounts, other_probabilities, probabilities[i])
    difference = abs(new_amount - original)
    if difference < minimum_difference:
        minimum_difference = difference 

print("{:.3f}".format(minimum_difference))





