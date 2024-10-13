n,k=map(int,input().split())
a=list(map(int,input().split()))
print(sum(1 for it in a if 5-it>=k)//3)