for _ in range(int(input())):
    N = int(input())
    x = 1
    while x<N:
        x+=x
    print("YES") if x == N else print("NO")
