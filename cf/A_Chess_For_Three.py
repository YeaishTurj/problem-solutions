import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    p=list(map(int,input().split()))
    if sum(p)&1: print(-1)
    else:
        p.sort()
        ans=0
        while p[1]:
            ans+=1
            p[1]-=1
            p[2]-=1
            p.sort()
        print(ans)
        
        # 3 4 5, 3 3 4, 323
