m,s=map(int,input().split())
if m==1 and s<=9: print(s,s)
elif s==1: 
    ans=""
    for i in range(m):
        if i: ans+='0'
        else: ans+='1'
    print(ans,ans)
elif s==0 or m*9<s: print(-1,-1)
else:
    mx=[]
    for i in range(m):
        dig=9
        if dig<=s:
            s-=dig
        else:
            dig=s
            s-=dig
        mx.append(dig)
    
    mn=mx[::-1]
    zero=0
    if 0 in mn:
        for i in range(len(mn)):
            if mn[i]==0 and zero==0: 
                mn[i]=1
                zero=1
            elif mn[i]:
                mn[i]-=1
                break
    
    for i in mn:
        print(i,end="")
    print(end=" ")
    for i in mx:
        print(i,end="")
