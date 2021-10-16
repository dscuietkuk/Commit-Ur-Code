for _ in range(int(input())):
    p, a, b, c, x, y = map(int, input().split(" "))
    total_1 = (x * a) + b
    total_2 = (y * a) + c
    maxi = 0
    if total_1 <= total_2:
        maxi = p // total_1
    else:
        maxi = p // total_2
    print(maxi)
