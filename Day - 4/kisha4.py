import re 

t = int(input())
for i in range(0,t):
    s1 = input()
    s2 = input()   
    lis = [(a.start()) for a in list(re.finditer(s1[0], s2))]

    k = 0
    for i in lis:
        j = s2[i:]+s2[:i]
        l = s2[i+1:]+s2[:i+1]
        if j == s1 or l == s1[::-1]:
            print('YES')
            k = 1
            break

    if k != 1:
        print('NO')