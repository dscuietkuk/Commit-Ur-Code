def check(r1, r2):
    if (r1 == 1) and (r2 == 1):
        return False
    else:
        return True

for i in range(int(input())):
    n = int(input())
    r1 = input()
    r2 = input()
    for i in range(n):
        value = check(int(r1[i]), int(r2[i]))
        if value == True:
            if i == n-1:
                print("YES")
            else:
                continue
        if value == False:
            print("NO")
            break
