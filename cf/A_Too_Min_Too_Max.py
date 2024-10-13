import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort(reverse=True)
    ans=0
    a=arr[0]
    b=arr[-1]
    c=arr[1]
    d=arr[-2]
    print(abs(a-b)+abs(b-c)+abs(c-d)+abs(d-a))