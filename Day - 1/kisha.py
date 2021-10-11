def recurr(n):
    if n ==1 or n==0:
        print("yes")

    elif n<1:
        print("no")

    else:
        
        recurr(n/2)


    
t= int(input())
for i in range(0,t):
        recurr(int(input()))


