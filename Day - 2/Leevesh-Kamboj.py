for _ in range(int(input())):
    N = int(input())
    a = input()
    b = input()
    print("NO") if int(a, 2) & int(b, 2) else print("YES")
