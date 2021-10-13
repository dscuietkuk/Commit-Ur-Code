for test_case in range(int(input())):
    n = int(input())
    c1 = int(input(), 2)
    c2 = int(input(), 2)

    if c1 & c2:
        print("NO")
    else:
        print("YES")
