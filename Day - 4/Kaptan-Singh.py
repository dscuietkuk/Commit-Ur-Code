for _ in range(int(input())):
    s1 = input()
    s2 = input()
    temp = ''
    if len(s1) != len(s2) :
        print('No')
    else:
        temp = s1+s1
        if s2 in temp:
            print("YES")
        else:
            print('NO')
