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
        try:
            add=add+(Z-arr[i])
            i=i+1
        except IndexError:
            break
    if i<k:
        print(i-1)
    else:
        print(i)                #Case when all theives escapes at Z
