t = int(input())
for i in range(0,t):
    val = input().split()
    # index:variable     0:p, 1:a, 2:b, 3:c, 4:x, 5:y      
    for i in range(6):
       val[i] = int(val[i])
    c1 = val[1]*val[4] + val[2]           
    c2 = val[1]*val[5] + val[3]
    print(val[0]//c1) if c1 < c2  else print(val[0]//c2)
