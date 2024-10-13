import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    x=sorted(list(map(int,input().split())))
    ans=10000000
    for a in range(x[0],x[2]+1):
        ans=min(ans,abs(a-x[0])+abs(a-x[1])+abs(a-x[2]))
    print(ans)