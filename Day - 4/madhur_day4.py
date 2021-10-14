def check(s_1, s_2):
    s_1 += s_1
    if (s_1.count(s_2) != 0):
        print("YES") 
    else:
        print("NO")

for i in range(int(input())):
    s_1 = input()
    s_2 = input()
    if len(s_1) == len(s_2):
        check(s_1, s_2)
    else:
        print("NO")
