'''
 * Project Euler #20: Factorial digit sum
 * 
 * n! means n × (n − 1) × ... × 3 × 2 × 1
 * For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
 * and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 *
 * Find the sum of the digits in the number 100!
 *
 * Answer: 648
'''

t=int(input())
for I in range(t) :
    n=int(input())
    fact = 1
    for j in range(n):
        fact = fact * (j+1)
    digitsum=0
    while fact>0:
        digitsum = digitsum + fact % 10
        fact = fact // 10
 
    print(digitsum)