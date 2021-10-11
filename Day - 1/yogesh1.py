def jump(N):

    if N==1:

        return 'YES'
    while N>2:

        if N%2==0:
            N=N/2
        else:
            return 'NO'
    return 'YES'

t=int(input())
for _ in range(t):

    N=int(input())
    print(jump(N))
