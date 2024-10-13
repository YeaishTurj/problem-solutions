import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    l,r=map(int,input().split())
    x=1
    sc=0
    while True:
        x*=2
        if x>r: break
        sc+=1
    print(sc)