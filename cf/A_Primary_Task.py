for _ in range(int(input())):
    s=input()
    if len(s)>2 and s[0]=='1' and s[1]=='0':
        exp=s[2::]
        if exp=="1" or exp[0]=='0': print("NO")
        else: print("YES")
    else: print("NO")