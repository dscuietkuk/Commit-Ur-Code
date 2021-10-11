def reach(n):
    while (n!=1):
        if n%2!=0:
            return False
        n = n//2
    return True   

for _ in range(int(input())):
    n = int(input())
    if reach(n):
        print('YES')
    else:
        print('NO')
    
