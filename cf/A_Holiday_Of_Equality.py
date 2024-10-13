n=input()
a=list(map(int,input().split()))
mx=max(a)
cost=0
for it in a:
    cost+=mx-it
print(cost)