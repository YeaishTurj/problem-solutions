for _ in range(int(input())):
    s=input()
    if len(s)&1: print("NO")
    else:
        flag=1
        for i in range(len(s)//2):
            if s[i]!=s[len(s)//2+i]:
                flag=0
                break
        if flag: print("YES")
        else: print("NO")