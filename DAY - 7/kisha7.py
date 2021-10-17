def prime(j):
    for i in range(2, int(j**(0.5)+1)):
        if j%i == 0:
            return False
    return True        

def check(j):
    while(1):
        if prime(j):
            return j
        j = j+1

t = int(input())
for i in range(t):
    val = input().split()
    l, r = int(val[0]), int(val[1])
    print(check(r+2))
