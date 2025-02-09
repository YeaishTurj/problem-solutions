import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    b.append(0)
    ans=0
    for i in range(n):
        if a[i]>b[i+1]: ans+=a[i]-b[i+1]
    print(ans)