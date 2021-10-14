for test_case in range(int(input())):
    s1 = input()
    s2 = input()
    if len(s1) != len(s2):
        print("NO")
    else:
        print("YES" if s2 in s1 + s1 else "NO")
