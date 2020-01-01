'''
Project Euler #35: Circular primes

The number, 197, is called a circular prime because all rotations of the digits: 
197, 971, and 719, are themselves prime.
There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
How many circular primes are there below one million?

Answer: 55
https://www.hackerrank.com/contests/projecteuler/challenges/euler035/problem
'''

def primesSieve(n):
    isPrime = [True for x in range(n+1)]
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
sumCircular = 0
for pr in primes:
    p = str(pr)
    rotations =  [p[x:] + p[:x] for x in range(len(p))] 
    allPrimes = True
    for r in rotations:
        if not isPrime[int(r)]:
            allPrimes = False
            break
    if allPrimes:
        sumCircular += pr
print(sumCircular)


