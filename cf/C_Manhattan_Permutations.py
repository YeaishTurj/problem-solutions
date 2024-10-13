import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(i+1 for i in range(n))
    i=total=0
    j=n-1
    while i<j and total<k:
        if total+2*abs(a[i]-a[j])>k:
            j-=1
        else:
            a[i],a[j]=a[j],a[i]
            total+=2*abs(a[i]-a[j])
            i+=1
            j-=1
    if total==k:
        print("Yes")
        print(*a)
    else: print("No")