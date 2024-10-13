import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,d=map(int,input().split())
    a=sorted(list(map(int,input().split())))
    flag=1
    for i in range(n):
        if i==0 or i==1: 
            if a[i]>d:
                flag=0
                break
        else:
            if a[i]>d and a[0]+a[1]>d:
                flag=0
                break
    if flag: print("YES")
    else: print("NO")