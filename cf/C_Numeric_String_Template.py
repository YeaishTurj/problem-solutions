for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    for _ in range(int(input())):
        s=input()
        if len(s)!=n: print("NO")
        else:
            flag=1
            hashA={}
            hashS={}
            for i in range(n):
                if a[i] not in hashA and s[i] not in hashS:
                    hashA[a[i]]=s[i]
                    hashS[s[i]]=a[i]
                else:
                    if a[i] in hashA and hashA[a[i]]!=s[i] or s[i] in hashS and hashS[s[i]]!=a[i]:
                        flag=0
                        break
            print("YES" if flag else "NO")