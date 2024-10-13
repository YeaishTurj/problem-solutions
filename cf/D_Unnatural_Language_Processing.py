v="ae"
c="bcd"
for _ in range(int(input())):
    n=int(input())
    s=input()
    if n==1 or n==2 or n==3: print(s)
    else:
        res=[]
        i=0
        while True:
            temp=""
            if i<n-3 and s[i] in c and s[i+1] in v and s[i+2] in c:
                if s[i+3] in c:
                    temp+=s[i]+s[i+1]+s[i+2]
                    i+=3
                else:
                    temp+=s[i]+s[i+1]
                    i+=2
            elif i<n-2 and s[i] in c and s[i+1] in v and s[i+2] in c:
                temp+=s[i]+s[i+1]+s[i+2]
                i+=3
            elif i<n-1 and s[i] in c and s[i+1] in v:
                temp+=s[i]+s[i+1]
                i+=2
            res.append(temp)
            if i>=n: break
        for i in range(len(res)):
            print(res[i],end="")
            if i!=len(res)-1: print('.',end="")
            else: print()