def check(n, m):
    if n == 1 or m == 1 or (n ==2 and m == 2):
        return "YES"
    else:
        return "NO"

for i in range(int(input())):
    n, m = input().split(" ")
    n = int(n)
    m = int(m)
    result = check(n, m)
    print(result)
