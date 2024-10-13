import sys
from collections import deque
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,m=map(int,input().split())
    mat=deque()
    for _ in range(n):
        deq=deque(map(int,input().split()))
        deq.appendleft(0)
        deq.append(0)
        mat.append(deq)
    deq=deque([0]*len(mat[0]))
    mat.appendleft(deq)
    mat.append(deq)

    def check(i,j,mat):
        res=-1
        if mat[i][j]>mat[i+1][j] and mat[i][j]>mat[i-1][j] and mat[i][j]>mat[i][j+1] and mat[i][j]>mat[i][j-1]:
            res=max(mat[i+1][j],mat[i-1][j],mat[i][j+1],mat[i][j-1])
        return res

    for i in range(1,n+1):
        for j in range(1,m+1):
            res=check(i,j,mat)
            if res!=-1: mat[i][j]=res
            print(mat[i][j],end=" ")
        print()
