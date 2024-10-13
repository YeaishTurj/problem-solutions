import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=sorted(list(map(int,input().split())))
    i=0
    first=a[i]
    while i<n and a[i]==first:
        i+=1
    if i==n: print(-1)
    else:
        print(i,n-i)
        for j in range(i):
            print(a[j],end=" ")
        print()
        for j in range(i,n):
            print(a[j],end=" ")
        print()