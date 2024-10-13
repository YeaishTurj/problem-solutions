x=y=z=0
for _ in range(int(input())):
    a=list(map(int,input().split()))
    x+=a[0]
    y+=a[1]
    z+=a[2]
if x|y|z: print("NO")
else: print("YES") 