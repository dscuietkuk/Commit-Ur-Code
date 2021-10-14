for _ in range(int(input())):
    k=input().split(' ')
    n=int(k[0])
    m=int(k[1])
    if ((n>2 and m!=1) or (m>2 and n!=1)):
        print("NO")
    else:
        print("YES")