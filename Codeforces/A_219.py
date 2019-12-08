k = int(raw_input())
w = raw_input()
l = sorted(set(w))
s = ""
f = False
for e in l:
    i = w.count(e)
    if i % k != 0:
        print -1
        f = True
        break
    else:
        for r in range(i/k):
            s += e
s_n = ""
if not f :
    for i in range(len(w)/len(s)):
        s_n += s
print s_n