for test_case in range(int(input())):
    n, k = map(int, input().split())
    points = sorted(list(map(int, input().split())))
    police = 0
    saved = 0
    while points[-1] > police and saved < k:
        police = police + n - points[-1]
        saved += 1
        points.pop()
    print(saved)
