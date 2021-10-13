for _ in range(int(input())):
    distanceNeedToBeCovered = int(input())
    x = input()
    y = input()
    print("NO") if int(x, 2) & int(y, 2) else print("YES")
