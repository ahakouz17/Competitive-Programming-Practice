'''
 * Project Euler #32: Pandigital products
 * 
 * We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once; 
 * for example, the 5-digit number, 15234, is 1 through 5 pandigital.
 * 
 * The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.
 * 
 * Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.
 * 
 * HINT: Some products can be obtained in more than one way so be sure to only include it once in your sum.
 * 
 * Answer:45228
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler032/problem
'''

n = int(input())
products = set()
for x in range(1000):
    for y in range(x+1, 100000):
        product = str(x*y)+str(x)+str(y)
        slen = len(product) 
        if slen > n: 
            break
        pdigits = set(product)
        if len(pdigits) == slen and slen == n and max(pdigits) == str(n) and min(pdigits) == '1':
            products.add(str(x*y))
products = [int(x) for x in products]
print(sum(products))