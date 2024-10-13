import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    b=list(map(int,input().split()))
    a=[b[0]]
    for i in range(n-2):
        a.append(b[i]|b[i+1])
    a.append(b[n-2])
    flag=0
    for i in range(n-1):
        if (a[i]&a[i+1])!=b[i]: flag=1
    if flag: a=[-1]
    print(*a)