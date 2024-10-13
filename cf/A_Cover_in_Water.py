from collections import deque
for _ in range(int(input())):
    n=int(input())
    a=deque(input())
    a.appendleft('#')
    a.append('#')
    ind=[]
    for i,it in enumerate(a):
        if it=='#': ind.append(i)
    two=ans=0
    for i in range(1,len(ind)):
        # print(ind[i]-ind[i-1]-1,end=" ")
        if ind[i]-ind[i-1]-1>2: two=2
        else: ans+=ind[i]-ind[i-1]-1
    if two: print(2)
    else: print(ans)