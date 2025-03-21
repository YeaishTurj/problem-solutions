import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    b=list(map(int,input().split()))
    b.sort()
    
    def isFound(x):
        l,r=0,2*n
        while l<=r:
            mid=(l+r)//2
            if prefix[mid]==x:
                return True
            if prefix[mid]<x:
                l=mid+1
            else:
                r=mid-1
        return False
    
    prefix,suffix=[0],[0]
    for i in range(2*n):
        if i%2==0:
            prefix.append(prefix[-1]-b[i])
        else:
            prefix.append(prefix[-1]+b[i])
    for i in range(2*n-1,-1,-1):
        if i&1:
            suffix.append(suffix[-1]+b[i])
        else:
            suffix.append(suffix[-1]-b[i])
    suffix=suffix[::-1]
    # print(prefix)
    # print(suffix)
    for i in range(len(prefix)-1,0,-1):
        val=prefix[i]-suffix[i]
        if prefix[i]<0: val=-val
        if 1<=val and val<=10**18 and isFound(val)==False:
            for j in range(i):
                print(b[j],end=' ')
            print(val,end=' ')
            for j in range(i,2*n):
                print(b[j],end=' ')
            print()
            break

    # print('-'*20)