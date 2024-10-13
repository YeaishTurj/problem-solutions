import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a=a[::-1]
    i=0
    first=a[0]
    while i<n and a[i]==first:
        i+=1
    if i==n: print("NO")
    else:
        a[0],a[i]=a[i],a[0]
        print("YES",*a)