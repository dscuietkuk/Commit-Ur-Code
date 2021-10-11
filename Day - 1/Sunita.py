#taking input
N=int(input())
#creating a list which contains jump of kangaroo
jump=[]
jump.insert(0,0)
jump.insert(1,1)
#creating a list which tells the position of kangaroo coreesponding to jumps////lists should look like
#jump=[0,1,1,2,4,8......] position=[0,1,2,4,8......]
position=[]
position.insert(0,0)
position.insert(1,1)
for i in range(2,N+1):
    q=0
    jump.insert(i,position[i-1])
    for j in range(0,i+1):
        q=q+jump[j]
    position.insert(i,q)   
#we'll go through position list and check if N exist there or not if it exist we print YES else NO
for r in position:
    if(N==position[r]):
        print("YES")
        break
else:
    print("NO")   
