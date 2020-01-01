'''
 * Project Euler #34: Digit factorials
 *
 * 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
 * Find the sum of all numbers which are equal to the sum of the factorial of their digits.
 * Note: as 1! = 1 and 2! = 2 are not sums they are not included.
 *
 * Answer: 40730
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler034/problem
'''

n = int(input())
factorials = [1 for x in range(10)]
for i in range(2, 10):
    factorials[i] = factorials[i-1]* i
totalSum = 0
for i in range(10, n):
    ns = str(i)
    digitFactSum = 0
    for c in ns:
        digitFactSum += factorials[int(c)]
    if digitFactSum % i == 0:
        totalSum += i
print(totalSum)
