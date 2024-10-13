import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    hash={}
    for it in a:
        if it in hash: hash[it]+=1
        else: hash[it]=1
    if len(hash)>2: print("No")
    else:
        if len(hash)==1: print("Yes")
        else:
            cnt=[hash[it] for it in hash]
            if abs(cnt[0]-cnt[1])<=1: print("Yes")
            else: print("No")