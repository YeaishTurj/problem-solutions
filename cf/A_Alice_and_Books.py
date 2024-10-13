import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    ans=a[-1]
    a.pop()
    print(ans+max(a))