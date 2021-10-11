# Taking input 
n = int(input("N = "))
for i in range(1):
    x = 0
    for j in range(n+1):
        if j == 0:
            x = 1
        else:
            while x < n: # Case when kangaroo towards given point
                x = x+x # Add x distances in x position from 0
            if x == n:     # Case when kangaroo reaches given point
                print("YES")
                break
            if x > n:
                print("NO") # Case when kangaroo crooses given point x>n
                break
