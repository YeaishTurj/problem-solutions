for _ in range(int(input())):
    n=int(input())
    s=input()
    ans=n
    for i in range(n):
        if s[i]=='1':
            ans=max(ans,2*(i+1),2*(n-i))
    print(ans)