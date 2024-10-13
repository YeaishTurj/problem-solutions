n=int(input())
a=list(map(int,input().split()))
ans=1000000000000
for it in a:
    ans=min(ans,abs(it))
print(ans)