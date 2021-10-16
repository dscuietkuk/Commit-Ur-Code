def max_crackers(P,a,b,c,x,y):
    min_price=min((b+x*a),(c+y*a))
    max_price=max((b+x*a),(c+y*a))
    posibl_crackers=P//min_price + (P-(P//min_price)*min_price)//max_price
    return posibl_crackers
inp=input().split()
givn_proprts=[int(i) for i in inp]
P=givn_proprts[0]
a=givn_proprts[1]
b=givn_proprts[2]
c=givn_proprts[3]
x=givn_proprts[4]
y=givn_proprts[5]
Total_crackers=max_crackers(P,a,b,c,x,y)
print(Total_crackers)
