import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    y,x=map(int,input().split())
    m=max(x,y)
    corner=1+(m-1)*m
    # print(corner)
    if y==m and x==m:
        print(corner)
    elif m&1:
        # upore barbe, pashe e kombe
        if y<m:
            print(corner+(m-y))
        elif x<m:
            print(corner-(m-x))
    else:
        # upore kombe, pashe e barbe
        if y<m:
            print(corner-(m-y))
        elif x<m:
            print(corner+(m-x))

# The above code is a solution for the problem from Number_Spiral.py