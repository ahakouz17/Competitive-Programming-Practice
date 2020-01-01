'''
 * Project Euler #30: Digit Nth powers
 * 
 * Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:
 * 
 *  1634 = 1^4 + 6^4 + 3^4 + 4^4
 *  8208 = 8^4 + 2^4 + 0^4 + 8^4
 *  9474 = 9^4 + 4^4 + 7^4 + 4^4
 * 
 * As 1 = 1^4 is not a sum it is not included.
 * 
 * The sum of these numbers is 1634 + 8208 + 9474 = 19316.
 * 
 * Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
 * 
 * Answer: 443839
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler030/problem
'''
import time

n = int(input())
start_time = time.time()

toPowerN = [i**n for i in range(10)]
sum = 0
for i in range(len(toPowerN)):
    for j in range(len(toPowerN)):
        for k in range(len(toPowerN)):
            for l in range(len(toPowerN)):
                for m in range(len(toPowerN)):
                    for n in range(len(toPowerN)):
                        num = i + j*10+k*100 +l*1000 + m * 10000 + n * 100000 
                        if toPowerN[i] + toPowerN[j] + toPowerN[k] + toPowerN[l] + toPowerN[m] + toPowerN[n] == num and num != 1:
                            sum += num

print(sum)
print("--- %s seconds ---" % (time.time() - start_time))
