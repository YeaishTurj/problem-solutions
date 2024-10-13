import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    hash={}
    for it in a:
        if it in hash: hash[it]+=1
        else: hash[it]=1
    ans=0
    for it in hash:
        ans+=hash[it]//3
    print(ans)