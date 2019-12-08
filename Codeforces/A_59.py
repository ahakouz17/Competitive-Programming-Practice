w = raw_input()
cap = sum(1 for c in w if c.isupper())
if cap > len(w)/2.0:
    print w.upper()
else :
    print w.lower()