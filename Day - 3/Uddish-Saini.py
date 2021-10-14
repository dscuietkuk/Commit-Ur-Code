# Function to check if it's possible to solve the puzzle
def canBeSolved(n,m):
    if (n == '1' or m=='1'):
        return True
    elif (n == '2' and m == '2'):
        return True
    else:
        return False

# Loop for Execution
for t in range(int(input())):
    dimensions = input().split()
    if (canBeSolved(dimensions[0],dimensions[1])):
        print("YES")
    else:
        print("NO")
