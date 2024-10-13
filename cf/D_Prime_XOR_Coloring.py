from collections import defaultdict
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    if n==1: print(1,1)
    elif n==2: print(2,1,2)
    elif n==3: print(2,1,2,2)
    elif n==4: print(3,1,2,2,3)
    elif n==5: print(3,1,2,2,3,3)
    else:
        hash=defaultdict(list)
        for i in range(1,n+1):
            hash[i%4].append(i)
        ans=[0]*n
        for it in hash:
            for jt in hash[it]:
                ans[jt-1]=it+1
        print(4,*ans)
        # 4 | (4a+i)^(4b+i) --> not prime, can be colored with same color
        # and i = 0,1,2,3
        # print(4)
        # for it in range(1,n+1):
        #     print(it%4 + 1,end=" ")
        # print()