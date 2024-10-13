y,w=map(int,input().split())
d=6-max(y,w)+1
if d==1: print("1/6")
elif d==2: print("1/3")
elif d==3: print("1/2")
elif d==4: print("2/3")
elif d==5: print("5/6")
else: print("1/1")