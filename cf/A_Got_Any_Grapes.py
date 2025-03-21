x,y,z=map(int,input().split())
a,b,c=map(int,input().split())

# finish all a
a-=x
if a<0:
    print("NO")
    exit()
# finish all a
dimitry=min(a,y)
a-=dimitry
y-=dimitry
b-=y
if b<0:
    print("NO")
    exit()
if a+b+c>=z:
    print("YES")
else:
    print("NO")