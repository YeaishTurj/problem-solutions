s=input()
prev='a'
ans=0
for it in s:
    cnt=ord(prev)-ord(it)
    if cnt<0: cnt*=-1
    ans+=(min(cnt,26-cnt))
    prev=it
print(ans)