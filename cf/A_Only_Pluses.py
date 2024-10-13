import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a=list(map(int,input().split()))
    for i in range(5):
        a.sort()
        a[0]+=1
    print(a[0]*a[1]*a[2])