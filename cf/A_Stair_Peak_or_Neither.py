import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if a<b and b<c: print("STAIR")
    elif a<b and b>c: print("PEAK")
    else: print("NONE")