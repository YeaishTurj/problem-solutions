str=list(input())
wub=list("WUB")
res=[]
i=0
while i<len(str):
    j=0
    while str[i]==wub[j]:
        i+=1
        j+=1
        if i==len(str) or j==len(wub): break
    if j==len(wub):
        str[i-1]=str[i-2]=str[i-3]=' '
    elif j==0: i+=1
# prev=''
# prev_word=""
# for it in str:
#     if it==' ' and prev!=' ':
#         res.append(prev_word)
#         prev_word=""
#     elif it!=' ': prev_word+=it
#     prev=it
# res.append(prev_word)
# for it in res:
#     print(it,end=" ")
print("".join(str))