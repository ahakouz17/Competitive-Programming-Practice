n = int(raw_input())
word = raw_input().lower()
word = "".join(set(word))
if len(word) == 26:
    print "YES"
else:
    print "NO"