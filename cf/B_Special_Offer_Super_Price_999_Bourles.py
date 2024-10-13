import math
p,d=map(int,input().split())
num=p
sub=0
arr=[]
dig=math.floor(math.log10(p)+1)
carry=cnt=0
while p:
    last=p%10
    if last==9+carry: temp=0
    else:
        temp=(10+last-(9+carry))%10
        carry=1
    if temp*pow(10,cnt)+sub>d: break
    sub=temp*pow(10,cnt)+sub
    cnt+=1
    p//=10
print(num-sub)