a=list(map(int,input().split("+")))
a.sort()
i=0
print(a[i],end="")
i+=1
while i<len(a):
    print(f"+{a[i]}",end="")
    i+=1