summands = []
s = raw_input()
for i in range(0, len(s), 2):
    summands.append(int(s[i]))
summands.sort()
s = ""
for e in range(len(summands)):
    s += str(summands[e])
    if e != len(summands)-1:
        s += "+" 
print s 