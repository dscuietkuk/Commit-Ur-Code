for t in range(int(input())):      # no. of t test cases
    n,k=input().split()            # input value of n and k by providing space b/w them
    n=int(n)
    k=int(k)
    K=input()                      # input vale of K by providing the position of thieves
    K=K.split()
    K=[int(i) for i in K]
    K.sort(reverse=True)
    J=[]
    for i in K:
        J.append(n-i)
    sum=0
    i=0
    while sum < n:
        sum += J[i]
        j=K.pop(0)
        i+=1
    K.append(j)
    print(k-len(K))
