from collections import defaultdict
for _ in range(int(input())):
    s=input()
    prefix=[0]*(len(s)+1)
    for i,it in enumerate(s):
        if it=='0': prefix[i+1]=prefix[i]+1
        else: prefix[i+1]=prefix[i]-1
    ans,mod=0,1e9+7
    hash={}
    n=len(s)
    for x in range(len(prefix)):
        if prefix[x] not in hash: hash[prefix[x]]=x+1
        else:
            hash[prefix[x]]+=x+1
            total=hash[prefix[x]]
            ans=(ans%mod + (((n-x)%mod)*(total%mod))%mod)%mod
    print(ans)