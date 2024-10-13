n,k=map(int,input().split())
a=list(map(int,input().split()))
print(sum(1 for it in a if it>=a[k-1] and it))