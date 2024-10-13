n,m=map(int,input().split())
mat=[]
def check(i,j):
    global mat
    global n
    global m
    if i==-1 or i==n or j==-1 or j==m: return 0
    if mat[i][j]=='S': return 1
    return 0
for _ in range(n):
    a=list(input())
    mat.append(a)
for i in range(n):
    for j in range(m):
        if mat[i][j]=='.': mat[i][j]='D'
for i in range(n):
    for j in range(m):
        if mat[i][j]=='W':
            if check(i-1,j) or check(i+1,j) or check(i,j-1) or check(i,j+1):
                print("No")
                exit()
print("Yes")
for i in range(n):
    for j in range(m):
        print(mat[i][j],end="")
    print()