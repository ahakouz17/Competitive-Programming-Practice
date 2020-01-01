'''
Project Euler #37: Truncatable primes

The number 3797 has an interesting property. Being prime itself,
it is possible to continuously remove digits from left to right, 
and remain prime at each stage: 3797, 797, 97, and 7. Similarly 
we can work from right to left: 3797, 379, 37, and 3.
Find the sum of the only eleven primes that are both truncatable 
from left to right and right to left.
NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.

Answer: 748317
https://www.hackerrank.com/contests/projecteuler/challenges/euler037/problem
'''

def primesSieve(n):
    isPrime = [True for x in range(n+1)]
    isPrime[0] = isPrime[1] = False
    primes = []
    for i in range(2, n+1):
        if not isPrime[i]:
            continue 
        primes.append(i)
        j = i*2
        while j < n+1:
            isPrime[j] = False
            j += i 
    return isPrime, primes

n = int(input())
isPrime, primes = primesSieve(n)
totalSum = 0
for pr in primes:
    if pr < 10:
        continue
    prs = str(pr)
    rightalts = [prs[:i] for i in range(1, len(prs)+1)]
    leftalts = [prs[i:] for i in range(0, len(prs))]
    alts = set(rightalts).union(leftalts)
    allPrimes = True
    for a in alts:
        if not isPrime[int(a)]:
            allPrimes = False
            break
    if allPrimes:
        totalSum += pr
print(totalSum)
