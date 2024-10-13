import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    b=list(map(int,input().split()))
    a=[]
    a.append(b[0])
    for i in range(1,n):
        a.append(b[i])
        if b[i]<b[i-1]: 
            a.append(b[i])
    print(len(a))
    print(*a)