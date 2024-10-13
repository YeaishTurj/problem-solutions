import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    if n%3: print("First")
    else: print("Second")