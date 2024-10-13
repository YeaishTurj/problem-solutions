n=int(input())
a=map(int,input().split())
hash={}
for it in a:
    if it in hash: hash[it]+=1
    else: hash[it]=1
b=[]
for it in hash:
    b.append((it,hash[it]))
b.sort(reverse=True)
if len(b)>1: print(b[0][0]-b[len(b)-1][0], b[0][1]*b[len(b)-1][1])
else: print(0,b[0][1]*(b[0][1]-1)//2)
# 11 12 13 14
# 11,12 11,13 11,14 12,13 12,14 13,14