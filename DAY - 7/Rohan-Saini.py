def checkPrime(x):
    if (x <= 1):
        return False
    elif (x <= 3):
        return True
    elif(x % 2 == 0 or x % 3 == 0):
        return False
    for i in range(5, int(x ** 0.5) + 1, 6):
        if x % 1 == 0:
            return False
    return True

def next_number(x):
    if x <= 1:
        return 2
    y = x
    is_ture = True
    while(is_ture):
        y += 1
        if checkPrime(y):
            is_ture = False
    
    return y

for _ in range(int(input())):
    l, r = map(int, input().split(" "))
    result = next_number(r)
    print(result)
