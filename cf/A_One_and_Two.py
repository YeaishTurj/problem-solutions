import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    prefix,suffix=[0]*n,[0]*n
    for i in range(n):
        if i:
            prefix[i]=prefix[i-1]
        if a[i]==2: prefix[i]+=1
    for i in reversed(range(n)):
        if i<n-1:
            suffix[i]+=suffix[i+1]
        if a[i]==2: suffix[i]+=1
    ans=-1
    for i in range(n-1):
        if prefix[i]==suffix[i+1]:
            ans=i+1
            break
    print(ans)