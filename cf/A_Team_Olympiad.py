n=int(input())
a=list(map(int,input().split()))
one=[]
two=[]
three=[]
for i in range(n):
    if a[i]==1: one.append(i+1)
    elif a[i]==2: two.append(i+1)
    else: three.append(i+1)
team=min(len(one),len(two),len(three))
print(team)
if team:
    for i in range(team):
        print(one[i],two[i],three[i])