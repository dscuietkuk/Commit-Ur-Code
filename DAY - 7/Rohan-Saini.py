def check_prime(i):
    l = []
    for j in range(2, i + 1):
        if i % j == 0:
            l.append(j)
    if len(l) == 1:
        return True
    else:
        return False

for _ in range(int(input())):
    l, r = map(int, input().split(" "))
    num = 10 ** 6
    while(1):
        if check_prime(num):
            print(num)
            break
        else:
            num += 1
    
