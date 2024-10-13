import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a,b=map(int,input().split())
    if a>b: 
        a^=b
        b^=a
        a^=b
    print(a,b)