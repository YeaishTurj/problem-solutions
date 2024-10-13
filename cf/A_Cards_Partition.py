import sys
input=sys.stdin.buffer.readline
def solve():
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    total=sum(a)
    totalWithK=total+k
    mx=max(a)
    size=n
    while size:
        if totalWithK%size==0 and mx<=totalWithK//size:
            print(size)
            return
        if total<=(totalWithK-(totalWithK%size)) and mx<=(totalWithK-(totalWithK%size))//size:
            print(size)
            return
        size-=1
for _ in range(int(input())):
    solve()