for _ in range(int(input())):
    n=int(input())
    s=input()
    if len(s)==2:
        if s=="00": print(0)
        elif s[0]=='0': print(s[1])
        else: print(s)
    elif s[0]=='0' or s[-1]=='0': print(0)
    elif len(s)==3 and s[1]=='0': 
        if s[0]=='1': print(s[-1])
        elif s[-1]=='1': print(s[0])
        else: print(ord(s[0])+ord(s[2])-2*ord('0'))
    elif s.count('0'): print(0)
    else:
        arr=[]
        for skip in range(n-1):
            a=[]
            for i in range(skip):
                a.append(ord(s[i])-ord('0'))
            a.append(10*(ord(s[skip])-ord('0'))+ord(s[skip+1])-ord('0'))
            for i in range(skip+2,n):
                a.append(ord(s[i])-ord('0'))
            arr.append(a)
        ans=100000000000
        for a in arr:
            # print(a)
            l=0
            while l<len(a) and a[l]==1: l+=1
            if l==len(a):
                ans=1
                break
            curr,total=a[l],0
            l+=1
            while l<len(a):
                if curr*a[l]>curr:
                    total+=curr
                    curr=a[l]
                l+=1
            total+=curr
            ans=min(ans,total)
        print(ans)
    # print("---------")