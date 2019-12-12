'''
 * Project Euler #13: Large sum
 * 
 * Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
 * 
 * 
 * Answer: 5537376230
'''
import math
n = int(input())
sum = 0
for i in range(n):
    t = int(input())
    #t = t % 10000000000
    sum += t
while sum > 10000000000:
    sum = sum // 10
print (sum)