for _ in range(int(input())):
    s1 = input()
    s2 = input()
    if s1 == s2 and (s1 * 2).count(s2): 
        print("YES") 
    else:
        print("NO")
