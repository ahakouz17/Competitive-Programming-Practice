''' TLE '''
import time
import math

n = int(input())
start_time = time.time()
countall = (n-1)*(n-1)
visited = [False for x in range(n+1)]

for x in range(2, n+1):
    powers = []
    e = 1
    power = x
    while power <= n:
        if visited[power]:
            power *= x
            e += 1
            continue
        visited[power] = True

        for b in range(2, n+1):
            powers.append(b*e)
        power *= x
        e += 1
    countall -= (len(powers) - len(set(powers)))
print(countall)
print("--- %s seconds ---" % (time.time() - start_time))