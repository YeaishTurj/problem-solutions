import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    k=int(input())
    n=(k-1)/3
    if n==int(n):
        print('YES')
    else:
        print('NO')