'''
Project Euler #40: Champernowne's constant

An irrational decimal fraction is created by concatenating the positive integers:
0.123456789101112131415161718192021...
It can be seen that the 12th digit of the fractional part is 1.
If dn represents the nth digit of the fractional part, find the value of the following expression.
d1 × d10 × d100 × d1000 × d10000 × d100000 × d1000000

Answer: 210
https://www.hackerrank.com/contests/projecteuler/challenges/euler040/problem
'''
import math

def findDigit(n):
    if n < 10:
        return n
    num = 9
    charPerNum = 1
    numd = 1
    while n > num * charPerNum:
        n-= num * charPerNum
        num *= 10
        charPerNum += 1
        numd += 1
    b = pow(10, numd-1)
    fac = numd * b
    mod = n % numd 
    if mod == 0:
        power = pow(10, (numd-mod)%numd)
        return ((n % fac) // (numd * power) - 1) % 10
    elif mod != 1:
        power = pow(10, (numd-mod)%numd)
        return (((n % fac) // (numd * power))) % 10
    else:
        return n // (fac) + 1

T = int(input())
for t in range(T):
    digitsIndex = input().strip().split()
    digitsIndex = [int(x) for x in digitsIndex]
    totlaProd = 1
    for i in digitsIndex:
        totlaProd *= findDigit(i)
    print(totlaProd)