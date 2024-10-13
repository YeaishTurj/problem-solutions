import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    L,R=map(int,input().split())
    l,r=0,int(1e12)
    while l<=r:
        mid=(l+r)//2;
        if L+mid*(mid+1)//2<=R: l=mid+1
        else: r=mid-1
    print(r+1)