n=int(input())
a=list(map(int,input().split()))
s=0
d=0
i=0
j=n-1
turn=1
while i<=j:
    if turn:
        s+=max(a[i], a[j])
        if a[i]>a[j]: i+=1
        else: j-=1
    else:
        d+=max(a[i], a[j])
        if a[i]>a[j]: i+=1
        else: j-=1
    turn^=1
print(s,d)