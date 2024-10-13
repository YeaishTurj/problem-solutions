a=list(map(int,input().split()))
s=input()
cnt=0
for it in s:
    cnt+=a[ord(it)-ord('0')-1]
print(cnt)