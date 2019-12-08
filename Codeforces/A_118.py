s = raw_input()
s = s.lower()
s_n = ""
for e in s :
    if e != 'e' and e != 'a' and e != 'i' and e != 'y' and e != 'u' and e != 'o':
        s_n += '.' + e        
print s_n