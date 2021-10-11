
# Sequence Algorithm

for _ in range(int(input())):
  N=int(input())
  while(N!=1):
    print(N,end=" ")  
    if(N%2==0):       # for even  
      N=N//2             #floor division to get largest possible integer
    else:             # for odd
      N=(N*3)+1
  print(N)            
