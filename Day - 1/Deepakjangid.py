T=int(input())
while(T>0):
    flag=0
    x=int(input())
    T-=1

    for i in range(17):
        n=2^i
        if(n==x):
            flag=1
            break

    if(flag==1):
        print("True")
    else:
        print("False")    
