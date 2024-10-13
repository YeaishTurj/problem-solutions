n=int(input())
a=list(map(int,input().split()))
mn=mx=a[0]
cnt=0
for it in a:
    if it>mx:
        cnt+=1
        mx=it
    if it<mn:
        cnt+=1
        mn=it
print(cnt)