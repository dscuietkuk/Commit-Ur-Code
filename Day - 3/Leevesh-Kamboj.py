for _ in range(int(input())):
    d = input().split()
    n = int(d[0])
    m = int(d[1])
    if n == 1 or m == 1 or (n == 2 and m == 2): 
        print("YES") 
    else:
        print("NO")
