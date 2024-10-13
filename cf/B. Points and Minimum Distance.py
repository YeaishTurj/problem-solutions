for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    path=0
    i=0
    while i<n-1:
        path+=abs(a[i]-a[i+1])
        i+=1
    i=n
    while i<2*n-1:
        path+=abs(a[i]-a[i+1])
        i+=1
    print(path)
    for i in range(n):
        print(a[i],end=" ")
        print(a[2*n-i-1])
    