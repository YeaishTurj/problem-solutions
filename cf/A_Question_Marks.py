for _ in range(int(input())):
    n=int(input())
    s=input()
    ans=min(n,s.count('A'))+min(n,s.count('B'))+min(n,s.count('C'))+min(n,s.count('D'))
    print(ans)