current=0
mn=-1
for _ in range(int(input())):
    a,b=map(int,input().split())
    current+=-a+b
    mn=max(mn, current)
print(mn)