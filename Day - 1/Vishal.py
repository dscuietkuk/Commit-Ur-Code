t = int(input())
while (t>0):
    n = int(input())
    i = 1
    check = False
    while (i<=n):
        if (i==n):
            print("YES\n")
            check = True
        i = i * 2
    if(check==False):
        print("NO\n")

    t = t - 1