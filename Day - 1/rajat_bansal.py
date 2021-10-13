import math


def can_reach(x):
    if x < 1:
        return False
    return math.log2(x) == int(math.log2(x))


for test_case in range(int(input())):
    N = int(input())
    if can_reach(N):
        print("YES")
    else:
        print("NO")
