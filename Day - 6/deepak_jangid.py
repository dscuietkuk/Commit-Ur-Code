for t in range(int(input())):
    p, a, b, c, x, y = map(int,input().split())
    cost_one_anar = x*a+b
    cost_one_rocket = y*a+c
    if cost_one_anar <= cost_one_rocket:
        print(int(p/cost_one_anar))
    else:
        print(int(p/cost_one_rocket))
