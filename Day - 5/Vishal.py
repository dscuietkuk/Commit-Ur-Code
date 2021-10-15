for t in range(int(input())):      
    n,k=input().split()            
    n=int(n)
    k=int(k)
    K=input()                      
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
