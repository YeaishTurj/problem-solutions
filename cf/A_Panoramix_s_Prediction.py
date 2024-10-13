import math
x,y=map(int,input().split())
for i in range(x+1, y+1):
    flag=1
    for j in range(2,int(math.sqrt(i)+1)):
        if i%j==0:
            flag=0
            break
    if flag:
        if i==y:
            print("YES")
        else:
            print("NO")
        exit()
print("NO")