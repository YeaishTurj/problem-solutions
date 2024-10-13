team=[]
for _ in range(int(input())):
    team.append(tuple(map(int,input().split())))
cnt=0
for it in team:
    for jt in team:
        if it[0]==jt[1]: cnt+=1
print(cnt)