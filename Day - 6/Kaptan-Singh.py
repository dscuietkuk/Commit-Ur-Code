for _ in range(int(input())):
    p,a,b,c,x,y = map(int,input().split())
    n1 = p//(x*a+b)
    n2 = p//(y*a+c)
    print(max(n1,n2))
