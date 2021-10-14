
def checkRotations(s1, s2):
    size1 = len(s1)
    size2 = len(s2)
    temp = ''
    if size1 != size2:
        return 0
    temp = s1 + s1
 
    
    #string.count returns the number of occurrences of
    if (temp.count(s2)):
        return 1
    else:
        return 0
 


s1=input()

s2=input()
if checkRotations(s1, s2):
    print ("YES")
else:
    print ("NO")
