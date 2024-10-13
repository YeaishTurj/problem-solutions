for _ in range(int(input())):
    s=input()
    n=len(s)
    ans=""
    for i in range(n-1):
        if s[i]==s[i+1]:
            if s[i]=='a':
                ans=s[:i+1]+"z"+s[i+1:]
                break
            else:
                ans=s[:i+1]+"a"+s[i+1:]
                break
    if not ans: ans=s+('z' if s[-1]=='a' else 'a')
    print(ans)