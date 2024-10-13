for _ in range(int(input())):
    n=int(input())
    s=input()
    if list(s)==sorted(s): print("YES")
    else: print("NO")
# for _ in range(int(input())):
#     n=int(input())
#     s=input()
#     num=[]
#     word=[]
#     i=0
#     while i<n and (ord(s[i])<ord('a') or ord(s[i])>ord('z')):
#         num.append(ord(s[i])-ord('1'))
#         i+=1
#     while i<n and s[i]>='a' and s[i]<='z':
#         word.append(s[i])
#         i+=1
#     if len(num)+len(word)!=n: print("NO")
#     else:
#         if num==sorted(num) and word==sorted(word): print("YES")
#         else: print("NO")
