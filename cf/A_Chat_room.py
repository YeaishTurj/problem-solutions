str=input()
hello="hello"
i=0
j=0
while i<len(str) or j<len(hello):
    if i==len(str) or j==len(hello): break
    if str[i]==hello[j]:
        i+=1
        j+=1
    else: i+=1
if j==len(hello): print("YES")
else: print("NO")

# str=input()
# h=[]
# e=[]
# ll=[]
# o=[]
# for i in range(len(str)):
#     if str[i]=='h': h.append(i)
#     elif str[i]=='e': e.append(i)
#     elif str[i]=='l': ll.append(i)
#     elif str[i]=='o': o.append(i)
# for ht in h:
#     for et in e:
#         if et>ht:
#             for lt in ll:
#                 if lt>et:
#                     for llt in ll:
#                         if llt>lt:
#                             for ot in o:
#                                 if ot>llt:
#                                     print("YES")
#                                     exit()
# print("NO")