for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a1=[]
    a1_b=[]
    b1=[]
    b1_a=[]
    for i in range(n):
        a1.append((a[i],i))
        b1.append((b[i],i))
    a1.sort()
    for it in a1:
        a1_b.append(b[it[1]])
    b1.sort()
    for it in b1:
        b1_a.append(a[it[1]])
    # print(a1)
    # print(a1_b)
    # print(b1)
    # print(b1_a)
    for it in a1:
        print(it[0],end=" ")
    print()
    for it in a1_b:
        print(it,end=" ")
    print()
    # print("--------------")
