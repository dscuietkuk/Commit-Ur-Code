for _ in range(int(input())):
    i1 = input().split()
    n, k = int(i1[0]), int(i1[1])
    i2 = input()
    x = [int(i) for i in i2.split()]
    x.sort()
    police = 0
    escaped = 0
    while x:
        x[-1] += 1 # moving thief
        x.sort()
        # condition where thief escapes
        if x[-1] == n:
            escaped += 1
            x.pop()
        police += 1 # moving police
        # condition where police shoots the thiefs
        while x and x[0] <= police:
            x.pop(0)
    print(escaped)

