# kangaroo problem

cp = 0                                 # currrent position of kangaroo is 0

dest = int(input('N = '))              # distance where we have to find if the kangaroo can reach that point or not.

jump = 1                               # initial jump condition for first turn
cp = jump

check = False


while (cp <= dest):
    cp = cp*2
    if (cp == dest):
        check = True
        break                   

        
if check == True:
    print('YES')
else:
    print('NO')
