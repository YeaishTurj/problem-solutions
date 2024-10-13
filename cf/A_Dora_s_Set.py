import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    l,r=map(int,input().split())
    if l%2==0: l+=1
    cnt=0
    while l<r-1:
        cnt+=1
        l+=4
    print(cnt)