'''
 * Project Euler #16: Power digit sum
 * 
 * 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 * What is the sum of the digits of the number 2^1000?
 * 
 * Answer:
 * 
'''
t = int(input())
for i in range(t):
    n = int(input())
    p = 2**n
    sum = 0
    while p > 0:
        sum += p%10
        p = p // 10
    print(sum)