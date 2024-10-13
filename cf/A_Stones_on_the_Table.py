n=int(input())
str=input()
str1=""
prev=''
for it in str:
    if it==prev: continue
    else:
        str1+=it
        prev=it
print(len(str)-len(str1))