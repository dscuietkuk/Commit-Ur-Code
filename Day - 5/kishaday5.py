t = int(input())
for i in range(0,t):
    val = input().split(' ')
    n = int(val[0])
    k = int(val[1])
    lis = input().split(' ')  
    for i in range(0, k):
        lis[i] = int(lis[i])
    lis.sort()
    lis.reverse()  
    curr = 0
    counter = 0
    while(counter<k and lis[counter]>curr):
        curr = curr + (n-lis[counter]) 
        counter = counter + 1
    print(counter)
