n,a,b,c=map(int,input().split())
# a*x+b*y+c*z=n
x=0
mx=-1
while x<=n/a:
    y=0
    while y<=n/b:
        if (n-a*x-b*y)%c==0 and (n-a*x-b*y)//c>=0:
            mx=max(mx, x+y+(n-a*x-b*y)//c)
        y+=1
    x+=1
print(mx)