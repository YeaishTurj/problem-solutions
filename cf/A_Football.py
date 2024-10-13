str=input()
i=flag=0
while i<len(str):
    cnt=0
    j=i
    while j<len(str) and str[i]==str[j]:
        cnt+=1
        j+=1
    if i==j: i+=1
    else: i=j
    if cnt>=7:
        flag=1
        break
if flag: print("YES")
else: print("NO")