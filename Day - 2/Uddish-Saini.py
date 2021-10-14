# Function to check the possibility of level completion
def possibility(n,row1,row2):
    for i in range (n):
        if (row1[i] == '1' and row2[i] == '1'):
            return False
    return True

# Loop for Execution
for t in range(int(input())):
    n = int(input())
    row1 = input()
    row2 = input()
    if (possibility(n,row1,row2)):
        print('YES')
    else:
        print('NO')
