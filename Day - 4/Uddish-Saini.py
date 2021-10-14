# Function to check if the two strings are rotations of each other
def rotation(s1,s2):
    if (len(s1)!=len(s2)):
        return False
    else:
        s1 = s1+s1
        if (s2 in s1):
            return True
        else:
            return False

# Loop for Execution
for t in range(int(input())):
    s1 = input()
    s2 = input()
    if(rotation(s1,s2)):
        print("YES")
    else:
        print("NO")
