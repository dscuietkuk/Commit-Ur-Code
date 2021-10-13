for _ in range(int(input())):
    N=int(input())
    a=int(input(),2)     # Converting input to integer from binary string
    b=int(input(),2)     # Converting input to integer from binary string
    if (a & b)==0:       # We used bitwise And Operator             # 1 & 1 = 1
        print("YES")                                                # 1 & 0 = 0
    else:                                                           # 0 & 1 = 0
        print("NO")      # if a & b==0 then there will be a path    # 0 & 0 = 0
                         