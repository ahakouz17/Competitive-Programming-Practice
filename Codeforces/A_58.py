s = raw_input().lower()
i = s.find("h")
if i == -1:
    print "NO"
else :
    s = s[i:]
    i = s.find("e")
    if i == -1:
        print "NO"
    else :
        s = s[i:]
        i = s.find("l")
        if i == -1 or i == len(s)-1:
            print "NO"
        else :
            s = s[i+1:]
            i = s.find("l")
            if i == -1:
                print "NO"
            else :
                s = s[i:]
                i = s.find("o")
                if i == -1:
                    print "NO"
                else :
                    print "YES"