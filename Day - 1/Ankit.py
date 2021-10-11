def Destiny(total_dist):
    curnt_pos=0
    if total_dist>curnt_pos:
        #from 0 kangaroo will move to 1
        curnt_pos=1
    while curnt_pos<total_dist:
        nxt_jump=curnt_pos
        curnt_pos+=nxt_jump
    if curnt_pos==total_dist:
        print('YES')
    else:
        print('NO')
tst_case=int(input())
for i in range(tst_case):
    total_dist=int(input())
    Destiny(total_dist)
