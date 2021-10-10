# Sequence Function
def sequence(n):
    print(int(n),end=' ')
    if(n%2==0):
        n = n/2
    else:
        n = n * 3 + 1
    if (n!=1):
        sequence(n)
    else:
        print(int(n))

# Loop for Execution
for t in range(int(input())):
    n = int(input())
    sequence(n)
