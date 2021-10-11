for i in range(int(input())):
    n = int(input())
    sum = 1
    while ( sum < n ):
        sum += sum
    if sum == n:
        print("YES")
    else:
        print("NO")
