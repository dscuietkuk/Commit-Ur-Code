for _ in range(int(input())):
    N=int(input())
    x=0
    if x==N:            # Case When N=0
        print("YES")
    else:
        x=1
        while x<N:      # Loop executes till x becomes greater than equal to N
            x=x+x
        if x==N:            # Case when kangaroo reaches given point
            print("YES")
        else:               # Case when kangaroo Crosses the given point
            print("NO")