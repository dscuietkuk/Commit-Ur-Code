for i in range(int(input())):
    k=input().split(' ')
    x=int(k[0])
    y=int(k[1])
    if ((x>2 and y!=1) or (y>2 and x!=1)):
        print("no")
    else:
        print("yes") 
