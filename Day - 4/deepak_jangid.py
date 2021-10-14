for t in range(int(input())):          #no. of t test cases
    a=input()                          # input first string
    b=input()                          # input second string
    c=""
    for i in b:
        c= i+c                         # reversing the second string by tyhe means of concatenation
    d=b+b
    if len(a)!=len(b):
        print("NO")
    else:
        if a==c or a in d:
            print("YES")
        else:
            print("NO")
