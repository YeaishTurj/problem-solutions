hash={}
for _ in range(int(input())):
    s=input()
    if s in hash:
        hash[s]+=1
    else: hash[s]=1
mx_goal=-1
for it in hash:
    if hash[it]>mx_goal: 
        winner=it
        mx_goal=hash[it]
print(winner)