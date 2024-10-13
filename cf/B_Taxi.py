import math
n=int(input())
a=list(map(int,input().split()))
four=a.count(4)
three=a.count(3)
two=a.count(2)
one=a.count(1)
ans=four+three+two//2
one-=min(three, one)
if two&1:
    ans+=1
    one-=min(one,2)
ans+=math.ceil(one/4)
print(ans)