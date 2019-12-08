n = int(raw_input())
l = []
for i in range(n):
    s = raw_input()
    l.append(s)
l_s = set(l)
maxi = 0
for e in l_s:
    i = l.count(e)
    if i > maxi :
        maxi = i
        m = e
print m