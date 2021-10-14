for _ in range(int(input())):
    n,m = map(int,input().split())
    if (n>2 and m!=1) or int(m>2 and n!=1) :
        print('No')
    else: 
        print("YES")
