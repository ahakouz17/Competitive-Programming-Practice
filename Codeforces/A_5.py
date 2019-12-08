import sys
users = 0
traffic = 0
while(True):
    try:
        s = raw_input()
        if s[0] == "+":
            users += 1
        elif s[0] == "-":
            users -= 1
        else:
            while(s[0] != ":" and len(s) > 1):
                s = s[1:]
            traffic += users * (len(s)-1)
    except (EOFError):
        break

print traffic