import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a,b,n=map(int,input().split())
    arr=sorted(list(map(int,input().split())))
    ans=b-1
    l=0
    while l<n:
        r=l
        time=1
        while r<n and time+arr[r]<=a:
            time+=arr[r]
            r+=1
        if l==r:
            ans+=a-1
            l+=1
        else:
            ans+=time-1
            l=r
    print(ans+1)