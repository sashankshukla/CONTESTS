from itertools import combinations

n, m = map(int, input().split())
bars = list(map(int, input().split()))
weights = list(map(int, input().split()))

def can_get_sum(nums, target):

    memo = {}
    
    def helper(i, target):
        if target == 0:
            return True
        if i >= len(nums):
            return False 
        if target < 0:
            return False
        if (i, target) in memo:
            return memo[(i, target)]
        memo[(i, target)] = helper(i+1, target) or helper(i+1, target - nums[i])
        return memo[(i, target)]
    
    return helper(0, target)

distinct = set()
for num_left_weights in range(len(weights) + 1):
    for left_weights in list(combinations(weights, num_left_weights)):
        left_weights = list(left_weights)
        right_weight_pool = weights.copy()
        for left_weight in left_weights:
            right_weight_pool.remove(left_weight)
        if can_get_sum(right_weight_pool, sum(left_weights)):
            distinct.add(2 * sum(left_weights))

final_distinct = set()
for bar in bars:
    for num in list(distinct):
        final_distinct.add(bar + num)

for result in sorted(list(final_distinct)):
    print(result)


