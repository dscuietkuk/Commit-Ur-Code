for i in range(int(input())):
    n, k = map(int , input().split(" "))
    l = list(map(int, input().split(" ")))
    l.sort()
    p = 0
    save = 0

    for i in range(n+1):
        if len(l) == 0:
            break
        l[-1] += 1
        p += 1
        if len(l) == 1:
            if l[0]  == p + 1 :
                save += 1
                break
        if l[-1] == n+1:
            save += 1
            l.remove(l[-1])
        else:
            if (p in l) and (l.count(p) >= 1):
                for v in range(l.count(p)):
                    l.remove(p)
        
    print(save)
