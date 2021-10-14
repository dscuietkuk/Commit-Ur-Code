for test_case in range(int(input())):
    m, n = map(int, input().split())
    if n == 1 or m == 1 or (n == 2 and m == 2):
        print("YES")
    else:
        print("NO")
