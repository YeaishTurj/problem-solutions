import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=[0]+list(map(int,input().split()))+[0]
    seat=[0]*(n+2)
    flag=1
    for i in range(1,n+1):
        if i==1: seat[a[i]]=1
        elif seat[a[i]-1] or seat[a[i]+1]: seat[a[i]]=1
        else: flag=0
    print("YES" if flag else "NO")