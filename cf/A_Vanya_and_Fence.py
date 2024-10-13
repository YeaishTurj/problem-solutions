n,h=map(int,input().split())
a=list(map(int,input().split()))
res=0
for it in a:
    if(it>h): res+=2
    else: res+=1
print(res)