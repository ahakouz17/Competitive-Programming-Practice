s1 = list(raw_input())
s2 = raw_input()
l = len(s1) - 1
while(s1[l] == 'z'):
    s1[l] = 'a'
    l -= 1
s1 = "".join(s1)
sn = s1[:l] + str(chr(ord(s1[l]) + 1)) + s1[l+1:]
if sn >= s2 : 
    print "No such string"
else:
    print sn
    
    
    
    