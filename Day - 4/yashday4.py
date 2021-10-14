for _ in range(int(input())):
    st1 = input()
    st2 = input()
    
    if len(st1) == len(st2) and (st1 * 2).count(st2): 
        print("YES") 
    else:
        print("NO")
