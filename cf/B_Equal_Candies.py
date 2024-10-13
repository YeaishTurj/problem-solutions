for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    print(sum(it for it in a)-n*min(a))