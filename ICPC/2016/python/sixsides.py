nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))

player1_wins = 0
player2_wins = 0
for num1 in nums1:
    for num2 in nums2:
        if num1 > num2:
            player1_wins += 1
        elif num2 > num1:
            player2_wins += 1

print("{:.5f}".format(player1_wins/(player1_wins+player2_wins)))