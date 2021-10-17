def check_coprime(x,y):
    hcf = 1
    for i in range(1, x+1):
        if not (x%i or y%i):
            hcf = i
    
    return hcf == 1

for _ in range(int(input())):
    i1 = input().split()
    L, R = int(i1[0]), int(i1[1]) 
    for i in range(2, 2*(10**9)):
        for a in range(L, R+1):
            if not check_coprime(a, i):
                break
        else:
            print(i)
            break
