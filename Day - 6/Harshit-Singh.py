for _ in range(int(input())):
    P,a,b,c,x,y=map(int,input().split(' '))
    num1=(x*a)+b
    num2=(y*a)+c
    ans=0
    if num1<=num2:
        ans=P // num1
    else:
        ans=P // num2
    print(ans)