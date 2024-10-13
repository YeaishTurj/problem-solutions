a=list(map(int,input().split()))
a.sort()
mn=100000000
for i in range(a[0], a[2]+1):
    dis=0
    for it in a:
        dis+=abs(i-it)
    mn=min(mn,dis)
print(mn)