for _ in range(int(input())):
    ans=sum(1 for it in list(zip("codeforces",input())) if it[0]!=it[1])
    print(ans)