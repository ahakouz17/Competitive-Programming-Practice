n,m,a = raw_input().split()
n, m, a = int(n), int(m), int(a)
s = (m / a) * (n / a)

if m % a != 0 :
    s += n / a
if n % a != 0 :
    s += m / a
if n % a != 0 and m % a != 0:
    s += 1
    
print s
