def possibleornot(level1, level2):
    if (level1 == 1) and (level2 == 1):
        return False
    else:
        return True

for i in range(int(input())):
    n = int(input())
    level1 = input()
    level2 = input()
    for i in range(n):
        ans = possibleornot(int(level1[i]), int(level2[i]))
        if ans == True:
            if i == n-1:
                print("YES")
            else:
                continue
        if ans == False:
            print("NO")
            break
