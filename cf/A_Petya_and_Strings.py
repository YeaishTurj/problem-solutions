str1=input()
str2=input()
str1=str1.lower()
str2=str2.lower()
res=0
for i in range(len(str1)):
    if str1[i]>str2[i]:
        res=1
        break
    elif str1[i]<str2[i]:
        res=-1
        break
print(res)