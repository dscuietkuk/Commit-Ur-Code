for i in range(int(input())):
    n = int(input("N = "))
    sum = 0
    for j in range(100):
        if j == 0:
            sum = 1
        else:
            sum = 2 * sum
            if sum < n:
                continue
            if sum == n:
                print("YES")
                break
            if sum > n:
                print("NO")
                break
