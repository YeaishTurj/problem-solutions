n,m=map(int,input().split())
color="CMY"
flag=0
for _ in range(n):
    a=list(map(str,input().split()))
    for it in a: 
        if it in color:
            flag=1
if flag: print("#Color")
else: print("#Black&White")