for _ in range(int(input())):
    n,m=map(int,input().split())
    s=list(input())
    st=sorted(list(set(map(int,input().split()))))
    c=list(input())
    c.sort()
    i=0
    for it in st:
        s[it-1]=c[i]
        i+=1
    for it in s:
        print(it,end="")
    print()
    # print(s,c)