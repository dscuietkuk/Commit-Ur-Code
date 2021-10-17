def check_prime(n):
    if n == 1:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True


a = 1000000

while True:
    a = a+1
    if check_prime(a):
        break

for _ in range(int(input())):
    l, r = map(int, input().split())
    print(a)
