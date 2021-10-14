for _ in range(int(input())):
    m=input().split(' ')
    Z=int(m[0])
    k=int(m[1])

    arr=list(map(int,input().split(' ')))
    arr.sort(reverse=True)
    add=0
    i=0
    count=0
    while add<Z:
        add=add+(Z-arr[i])
        i=i+1
    print(i-1)



