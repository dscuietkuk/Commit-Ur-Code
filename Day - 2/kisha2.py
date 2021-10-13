t = int(input())
for i in range (0,t):
    n = int(input())
    str1 = input()
    str2 = input()
   
    for j in range(0,n-1):
        if j == n-2:
            print('yes')
        elif str1[j+1]=='0' or str2[j+1]=='0':
            continue
        else:
            print('no')
            break

