for _ in range(int(input())):
    n = int(input())
    print(n, end=" ")
    while n != 1:
        n = (n*3) + 1 if n % 2 else n // 2
        print(n, end=" ")
