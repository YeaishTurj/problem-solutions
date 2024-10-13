for _ in range(int(input())):
    n=int(input())
    s=input()
    coin=0
    for i in range(n):
        if s[i]=='@': coin+=1
        elif i<n-1 and s[i]=='*' and s[i+1]=='*': break
    print(coin)