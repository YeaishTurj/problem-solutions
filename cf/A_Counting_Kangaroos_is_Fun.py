import sys
input=sys.stdin.buffer.readline
n=int(input())
a=sorted([int(input()) for _ in range(n)])
print(a)
l,r,cnt=0,n-1,0
while l<r:
    if 2*a[l]<=a[r]:
        cnt+=1
        l+=1
        r-=1
    else: break
print(n-cnt)