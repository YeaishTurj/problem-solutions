for _ in range(int(input())):
    n=int(input())
    s1=input()
    s2=input()
    cnt=0
    for i in range(1,n-1):
        if s1[i-1]=='x' and s1[i]=='.' and s1[i+1]=='x' and s2[i-1]=='.' and s2[i]=='.' and s2[i+1]=='.': cnt+=1
        if s2[i-1]=='x' and s2[i]=='.' and s2[i+1]=='x' and s1[i-1]=='.' and s1[i]=='.' and s1[i+1]=='.': cnt+=1
    print(cnt)