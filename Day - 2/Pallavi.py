def possibility(cols,row1,row2):
    for i in range (cols):
        if (row1[i] == '1' and row2[i] == '1'):
            return False
    return True


for t in range(int(input())):
    cols = int(input())
    row1 = input()
    row2 = input()
    if (possibility(cols,row1,row2)):
        print('YES')
    else:
        print('NO')
