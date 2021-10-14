for _ in range(int(input())):
    str1=input()
    str2=input()
    new=""

    if len(str1)!=len(str2):      
        print("NO")
    else:
        new= str1 + str1          
        if new.count(str2)>0:     
            print("YES")
        else:
            print("NO") 
