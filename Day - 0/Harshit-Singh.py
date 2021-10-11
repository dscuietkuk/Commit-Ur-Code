for _ in range(int(input())):
    N=int(input())
    while N!=1:
        print(int(N),end=' ')
        if N%2==0:
            N=N/2
        else:
            N=(N*3)+1
    print(int(N))