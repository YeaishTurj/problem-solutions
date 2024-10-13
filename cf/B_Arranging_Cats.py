for _ in range(int(input())):
    n=int(input())
    s=input()
    f=input()
    add=remove=0
    for i in range(n):
        if s[i]=='1' and f[i]=='0': add+=1
        elif s[i]=='0' and f[i]=='1': remove+=1
    print(max(add,remove))