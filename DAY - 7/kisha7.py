def gcd(p,q):
    if p<q:
        p,q = q,p
    while q != 0:
        p, q = q, p%q
    return p

def check(j, l, r):
    for i in range(l, r+1):
        if gcd(i, j) != 1:
            return False
    return True        
t = int(input())
for i in range(t):
    val = input().split()
    l, r = int(val[0]), int(val[1])
    k = r-l if r-l>2 else k=2
    while(1):
        if k == l: k = r
        if check(k, l, r):
            print(k)
            break    
        k = k+1
