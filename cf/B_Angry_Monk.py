import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=sorted(list(map(int,input().split())))
    ans=i=0
    while i<k-1:
        ans+=2*a[i]-1
        i+=1
    print(ans)