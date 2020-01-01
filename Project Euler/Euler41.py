'''
Project Euler #41: Pandigital prime

We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once.
For example, 2143 is a 4-digit pandigital and is also prime.
What is the largest n-digit pandigital prime that exists?

Answer: 
https://www.hackerrank.com/contests/projecteuler/challenges/euler041/problem
'''

## A prime number can only be 4-pandigital or 7-pandigital, since all other n-pandigital number
# divide by 3 (because the sum of their digits is multiple of 3)  
import time

from bisect import bisect_left 
  
def BinarySearch(a, x): 
    i = bisect_left(a, x) 
    if i != len(a) and pandigitalprimes[i] == x: 
        return i
    elif i != len(a) and pandigitalprimes[i] >= x:
        return i-1
    else: 
        return -1

def primesSieve():
    n = 7654322
    isPrime = [True for x in range(n)]
    pandigitalprimes = []
    for i in range(2, n):
        if not isPrime[i]:
            continue 
        if isPandigital(i):
            pandigitalprimes.append(i)
        j = i*2
        while j < n:
            isPrime[j] = False
            j += i 
    return pandigitalprimes

def isPandigital(n):
    n = str(n)
    nunique = sorted(set(n))
    if len(n) != len(nunique) or (len(nunique) != 4 and len(nunique) != 7):
        return False
    if nunique[0] == '1' and nunique[-1]== str(len(nunique)):
        return True
    return False

start_time = time.time()
pandigitalprimes = primesSieve()
T = int(input())
for t in range(T):
    n = int(input())
    if n < 1423:
        print(-1)
    elif n > 7654321:
        print(pandigitalprimes[-1])
    else:
        print(pandigitalprimes[BinarySearch(pandigitalprimes, n)])
