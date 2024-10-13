for _ in range(int(input())):
    n,m,k=map(int,input().split())
    a=input()
    log=[]
    for i in range(n):
        if a[i]=='L': log.append(i)
    log.reverse()
    i=-1
    while i<n:
        if i==-1 or a[i]=='L':
            if len(log) and log[-1]-i<=m:
                i=log[-1]
                log.pop()
            else:
                i+=m
        elif a[i]=='W' and k:
            i+=1
            k-=1
        else: break
    ans = "YES" if i>=n else "NO"
    print(ans)

# for _ in range(int(input())):
#     n,m,k=map(int,input().split())
#     a=input()
#     l=-1
#     while l<n:
#         if l==-1:
#             f=0
#             jump=r=l
#             while r<n and r-l+1<=m:
#                 r+=1
#                 if r==n: break
#                 if a[r]=='L': break
#                 elif a[r]=='W': jump=r
#             if r==n: l=n
#             elif a[r]=='L': l=r
#             elif jump!=l: l=jump
#             else: break
#         else:
#             if a[l]=='L':
#                 jump=r=l
#                 while r<n and r-l+1<=m:
#                     r+=1
#                     if r==n: break
#                     if a[r]=='L': break
#                     elif a[r]=='W': jump=r
#                 if r==n: l=n
#                 elif a[r]=='L': l=r
#                 elif jump!=l: l=jump
#                 else: break
#             elif a[l]=='W':
#                 r=l
#                 while r<n and k:
#                     r+=1
#                     k-=1
#                     if r==n: break
#                     elif a[r]=='L': break
#                     elif a[r]=='C': break
#                 if r==n: l=n
#                 elif a[r]=='L': l=r
#                 else: break
#             else: break
#     if l==n: print("YES")
#     else: print("NO")

