n,k=map(int,input().split())
cnt=0
for i in range(1,n+1):
    if 240-5*i*(i+1)//2 >= k: cnt+=1
print(cnt)