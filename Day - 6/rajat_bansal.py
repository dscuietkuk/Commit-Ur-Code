for test_case in range(int(input())):
    P, a, b, c, x, y = map(int, input().split())
    print(max(P//(b+a*x), P//(c+a*y)))
