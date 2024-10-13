n=int(input())
temp=n
mishka=0
for it in range(n):
    m,c=map(int,input().split())
    if m==c: temp-=1
    elif m>c: mishka+=1
if mishka>temp-mishka: print("Mishka")
elif mishka<temp-mishka: print("Chris")
else: print("Friendship is magic!^^")