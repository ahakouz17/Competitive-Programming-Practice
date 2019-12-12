'''
  Project Euler #6: Sum square difference
  
  The sum of the squares of the first ten natural numbers is,
    1^2 + 2^2 + ... + 10^2 = 385
  
  The square of the sum of the first ten natural numbers is,
    (1 + 2 + ... + 10)^2 = 552 = 3025
  
  Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
  Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
  
  Answer: 25164150
'''

import math

t = int(input())
for i in range(t):
    n = int(input())
    print (int(abs(n**3 / 3.0 + n**2 / 2.0 + n / 6.0 - (n * (n + 1) /2.0)**2)))