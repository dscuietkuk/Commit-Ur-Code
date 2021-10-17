def coprime(L,R):
    factors=[]
    for k in range(2,L+1):
        if L%k == 0 and k not in factors:
            factors.append(k)
    for u in range(2,R+1):
        if R%u == 0 and u not in factors:
            factors.append(u)
    print(factors)
    for t in range(2,L*R):
        if t in factors:
            continue
        else:
            for w in factors:
                if t%w == 0:
                    w='fctr_of_t'
                    break
            if w== 'fctr_of_t':
                continue
            return t

test_case=int(input())
for i in range(test_case):
    inp=input().split()
    inp=[int(j) for j in inp]
    L=inp[0]
    R=inp[1]
    result=coprime(L,R)
    print(result)
