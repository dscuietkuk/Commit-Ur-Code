for _ in range(int(input())):
    string1 = input()
    string2 = input()
    size1 = len(string1)
    size2 = len(string2)
    conc = ' '
    if size1 != size2:
        print("NO")
    else:
        conc = string1 + string1
        if string2 in conc:
            print("YES")
        else:
            print("NO")  
