def check(s_1, s_2):
    if (s_1 == 1) and (s_2 == 1):
        return False
    else:
        return True

for i in range(int(input())):
    n = int(input())
    s_1 = input()
    s_2 = input()
    for i in range(n):
        ans = check(int(s_1[i]), int(s_2[i]))
        if ans == True:
            if i == n-1:
                print("YES")
            else:
                continue
        if ans == False:
            print("NO")
            break
