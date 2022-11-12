b, l = map(int, input().split())
digits = list(map(int, input().split()))
odd_sum = sum(digits[i] for i in range(1, len(digits), 2))
even_sum = sum(digits[i] for i in range(0, len(digits), 2))
odd_decrease, even_decrease = None, None

if odd_sum > even_sum:
    modulo = (odd_sum - even_sum) % (b + 1)
    odd_decrease, even_decrease = modulo, b + 1 - modulo
elif even_sum > odd_sum:
    modulo = (even_sum - odd_sum) % (b + 1)
    odd_decrease, even_decrease = b + 1 - modulo, modulo

def print_answer(index, legit_answer):
    while legit_answer - (b + 1) >= 0:
        legit_answer -= b + 1
    print(index + 1, legit_answer)

if odd_sum == even_sum or not odd_decrease or not even_decrease:
    print(0, 0)
else:
    result_found = False
    for i in range(l):
        if i % 2 == 0:
            if digits[i] >= even_decrease:
                result_found = True 
                print_answer(i, digits[i] - even_decrease)
                break
        else:
            if digits[i] >= odd_decrease:
                result_found = True 
                print_answer(i, digits[i] - odd_decrease)
                break
    
    if not result_found:
        print(-1, -1)