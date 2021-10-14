#Day-1 sol
for _ in range(int(input())):
  n=int(input())
  if (n&(n-1)==0) and n!=0:
    print("YES")
  else:
    print("NO")
