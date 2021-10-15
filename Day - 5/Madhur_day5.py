for test_case in range(int(input())):
    n, k = map(int, input().split())
    points = sorted(list(map(int, input().split())))
    print(points)
    police = 0
    saved = 0
    while points:
        points[-1] += 1
        if points[-1] == n:
            saved += 1
            points.pop()
        police += 1
        while police in points:
            points.remove(police)
    print(saved)
