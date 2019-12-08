import sys
max_length = 0
l = []
while(True):
    try:
        s = raw_input()
        l.append(s)
        max_length = max(max_length, len(s))  
    except (EOFError):
        break
align_left = True
print '*' * (2+max_length)
for e in l:
    s = '*'
    diff = max_length - len(e)
    if diff % 2 == 0:
        s += ' ' * (diff/2) + e + ' ' * (diff/2) + '*'
    else:
        if align_left:
            s += ' ' * (diff/2) + e + ' ' * (diff/2 + 1) + '*'
            align_left = False
        else:
            s += ' ' * (diff/2 + 1) + e + ' ' * (diff/2) + '*'
            align_left = True 
    print s
    
print '*' * (2+max_length)