s=input()
n=len(s)
prefix,suffix=[0]*(n+1),[0]*(n+1)
for i in range(1,n+1):
    prefix[i]=prefix[i-1] + (1 if s[i-1]=='Q' else 0)
for i in reversed(range(n)):
    suffix[i]=suffix[i+1] + (1 if s[i]=='Q' else 0)
ans=0
for i in range(n):
    if s[i]=='A':
        ans+=prefix[i+1]*suffix[i+1]
print(ans)