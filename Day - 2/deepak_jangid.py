for i in range(int(input())):       #no. of t test cases
    N=int(input())                  #no. of columns
    a=input()                       # The i-th of these lines(3 and 9) describes the i-th line of the level -- the line consists of the characters '0' and '1'
    if len(a)>N:
        print("Please, enter correct value that satisfies the no. of columns")
        a=input()
    else:
        a=int(a,2)
    b=input()
    if len(b)>N:
        print("Please, enter correct value that satisfies the no. of columns")
        b=input()
    else:
        b=int(b,2)

    if (a & b)==0:
        print("YES")
    else:
        print("NO")
