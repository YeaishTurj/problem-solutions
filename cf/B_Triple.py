import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    hash={}
    ans=-1
    for it in a:
        if it in hash: hash[it]+=1
        else: hash[it]=1
        if hash[it]>=3: 
            ans=it
            break
    print(ans)