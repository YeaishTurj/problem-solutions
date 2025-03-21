# s=input()
# hash=set()
# ans=1
# for i in range(len(s)):
#     if i==0:
#         if s[i]=='?':
#             ans*=9
#         elif s[i].isdigit():
#             ans*=1
#         else:
#             ans*=9
#             hash.add(s[i])
#     else:
#         if s[i] in hash:
#             ans*=1
#         elif s[i]=='?':
#             ans*=10
#         elif s[i].isdigit():
#             ans*=1
#         else:
#             ans*=10-len(hash)
#             hash.add(s[i])
# print(ans)

s=input()
ans,cnt=1,0
hash=set()
for i in range(len(s)):
    if i==0:
        if s[i].isdigit():
            continue
        else:
            ans*=9
            if s[i]!='?':
                hash.add(s[i])
    else:
        if s[i].isdigit():
            continue
        else:
            if s[i]=='?':
                cnt+=1
            else:
                if s[i] in hash:
                    continue
                else:
                    ans*=10-len(hash)
                    hash.add(s[i])
print(ans,end="")
for i in range(cnt):
    print("0",end="")