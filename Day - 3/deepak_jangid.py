for t in range(int(input())):       # no. of t tset cases
    n,m=input().split(" ")          # no. of rows and columns separated by space
    n=int(n)                        # rows are converted from string data type to integer data type
    m=int(m)                        # columns are converted from string data type to integer data type
    """puzzle can only be solved if either of no. of rows and columns are equal to 1 or if the no. of rows and columns both are equal to 2"""
    if(n==1  or m==1):           
        print("YES")
    elif(n==2 and m==2):
        print("YES")
    else:
        print("NO")
