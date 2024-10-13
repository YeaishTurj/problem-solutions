n=int(input())
a=list(map(int,input().split()))
mx=1
cnt=0
prev=0
for it in a:
    if it>=prev: cnt+=1
    else:
        mx=max(mx, cnt)
        cnt=1
    prev=it
mx=max(mx, cnt)
print(mx)