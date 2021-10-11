import math

# Function to determine if kangaroo can reach that position
def canReach(position):
    if (position == 0 or position == 1):
        return True
    val1 = math.log(position,2)
    val2 = int(val1)
    if (val1 == val2):
        return True
    else:
        return False

# Loop for Execution
for t in range(int(input())):
    position = int(input())
    if(canReach(position)):
        print('YES')
    else:
        print('NO')
