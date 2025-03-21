n=int(input())
a=int(input())
b=int(input())
# ax+by=n
# x=(n-by)/a
# x=n/a-b/a*y
y=0
while n-b*y>=0:
    if (n-b*y)%a==0:
        print("YES")
        print((n-b*y)//a,y)
        exit()
    y+=1
print("NO")