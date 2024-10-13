m=0
c=0
for _ in range(int(input())):
    a,b=map(int,input().split())
    if a>b: m+=1
    elif a<b: c+=1
if m==c: print("Friendship is magic!^^")
elif m>c: print("Mishka")
else: print("Chris")