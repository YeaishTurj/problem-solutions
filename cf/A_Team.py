cnt=0
for _ in range(int(input())):
    a=list(map(int,input().split()))
    if a.count(1)>=2: cnt+=1
print(cnt)