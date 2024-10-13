import sys
input=sys.stdin.buffer.readline
res=[]
res.append(0)
for i in range(1,200010):
    ans=0
    n=i
    while n:
        ans+=n%10
        n//=10
    res.append(res[i-1]+ans)
for _ in range(int(input())):
    n=int(input())
    print(res[n])