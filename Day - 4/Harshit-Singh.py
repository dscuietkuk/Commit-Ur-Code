for _ in range(int(input())):
    str1=input()
    str2=input()
    new=""

    if len(str1)!=len(str2):      # Check if sizes of two strings are same
        print("NO")
    else:
        new= str1 + str1          # Create a temporary string new by concatenating Str1 with itself
        if new.count(str2)>0:     # checking if str2 is a substring of new if yes then str2 is a rotation of str1
            print("YES")
        else:
            print("NO")