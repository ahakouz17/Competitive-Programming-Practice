g1 = raw_input()
g2 = raw_input()
pile = raw_input()
if sorted(g1+g2) == sorted(pile):
    print "YES"
else:
    print "NO"