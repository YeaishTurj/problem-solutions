n=int(input())
total=n*(n+1)//2
if total&1: print("NO")
else:
    set1,set2=[],[]
    s1=s2=total//2
    while s1 and s2:
        if s1>=s2:
            set1.append(n)
            set2.append(n-1)
            s1-=n
            s2-=n-1
            n-=2
        else:
            set2.append(n)
            set1.append(n-1)
            s2-=n
            s1-=n-1
            n-=2
    while s1:
        set1.append(n)
        s1-=n
        n-=1
    while s2:
        set2.append(n)
        s2-=n
        n-=1
    print("YES")
    print(len(set1),*set1)
    print(len(set2),*set2)

# The above code is a solution for the problem from Two_Sets.py