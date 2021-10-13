t = int(input())
for i in range (0,t):
    str = input()
    lis = str.split(' ')
    if lis[0] == '1' or lis[1] == '1':
        print('YES')
    elif lis[0] == '2' and lis[1] == '2':
        print('YES')
    else :
        print('NO')
    