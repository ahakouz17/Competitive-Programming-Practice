'''
Project Euler #36: Double-base palindromes

The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.
Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.
(Please note that the palindromic number, in either base, may not include leading zeros.)

Answer: 872187
https://www.hackerrank.com/contests/projecteuler/challenges/euler036/problem
'''
import math

def numberToBase(n, b):
    if n == 0:
        return [0]
    digits = []
    while n:
        digits.append(int(n % b))
        n //= b
    return digits[::-1]

def isPalindrome(num):
    f = 0
    l = len(num)-1
    while f < l:
        if num[f] != num[l]:
            return False
        f += 1
        l -= 1
    return True

inputString = input().strip().split()
n = int(inputString[0])
b = int(inputString[1])

base10Digits = [str(i) for i in range(10)]
baseBDigits = [str(i) for i in range(b)]

# base 10 palindromes:
base10Pals = []

for i in base10Digits:
    for j in base10Digits:
        for k in base10Digits:
            if i == '0' and j == '0':
                base10Pals.append(int(k+k))
                base10Pals.append(int(k))
            elif i == '0':
                base10Pals.append(int(j+k+k+j))
                base10Pals.append(int(j+k+j))
            else:
                base10Pals.append(int(i+j+k+k+j+i))
                base10Pals.append(int(i+j+k+j+i))

palSum = 0
for i in base10Pals:
    if i > n:
        continue
    baseNum = numberToBase(i, b)
    if isPalindrome(baseNum):
        palSum += i

print(palSum)
