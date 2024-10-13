import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a,b=map(int,input().split())
    xk,yk=map(int,input().split())
    xq,yq=map(int,input().split())
    k=[(xk+a,yk+b),(xk+a,yk-b),(xk-a,yk+b),(xk-a,yk-b),(xk+b,yk+a),(xk+b,yk-a),(xk-b,yk+a),(xk-b,yk-a)]
    q=[(xq+a,yq+b),(xq+a,yq-b),(xq-a,yq+b),(xq-a,yq-b),(xq+b,yq+a),(xq+b,yq-a),(xq-b,yq+a),(xq-b,yq-a)]
    cnt=0
    s=set()
    for it in k:
        for jt in q:
            if it==jt: s.add(it)
    print(len(s))