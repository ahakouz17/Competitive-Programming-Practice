s = raw_input()
if s.isupper():
    print s.lower()
elif len(s) == 1 :
    print s.upper()
elif s.islower():
    print s
else :
    n = 0
    for e in s:
        if e.islower():
            n += 1
    if (n == 1 and s[0].islower()) or (n == len(s)-1 and s[0].isupper()):    
        print s.capitalize()
    else :
        print s