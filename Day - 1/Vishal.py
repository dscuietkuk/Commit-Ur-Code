t = int(input())
while (t>0):
    n = int(input())
    i = 0
    if (i==n):
        print("YES")
    else:
        i=1
        while (i<n):
            i = i + i
        if(i==n):
            print("YES")
        else:
            print("NO")

    t = t - 1
