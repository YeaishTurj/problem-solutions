a=[]
for _ in range(5):
    row=list(map(int,input().split()))
    a.append(row)
for i, row in enumerate(a):
    for j, it in enumerate(row):
        if it==1: res=abs(i-2)+abs(j-2)
print(res)