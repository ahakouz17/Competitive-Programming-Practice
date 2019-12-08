l1 = []
l2 = []
lec = []
notes = ""
n_lec, n_words = raw_input().split()
n_lec, n_words = int(n_lec), int(n_words)
for i in range(n_words):
    s1, s2 = raw_input().split()
    l1.append(s1)
    l2.append(s2)
l = raw_input()
lec = l.split()
for w in lec :
    i = l1.index(w)
    if len(l1[i]) <= len(l2[i]):
        notes += l1[i] + " "
    else :
        notes += l2[i] + " "
        

print notes