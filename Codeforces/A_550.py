s = raw_input()
if s.count("AB") > 0 and s.count("BA") > 0 and s.count("AB")+s.count("BA")-s.count("ABA")-s.count("BAB") >= 2:
    print "YES"
else:
    print "NO"