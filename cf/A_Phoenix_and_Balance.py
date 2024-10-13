import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    ans=pow(2,n)
    for i in range(1,n):
        if i<n//2: ans+=pow(2,i)
        else: ans-=pow(2,i)
    print(ans)