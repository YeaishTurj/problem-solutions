import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    hash={}
    for it in a:
        hash[it]=1+hash.get(it,0)
    alice=0
    for it in hash:
        alice+=hash[it]&1
    if alice: print("YES")
    else: print("NO")