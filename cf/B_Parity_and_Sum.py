import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=input()
    a=list(map(int,input().split()))
    even=sorted(list(filter(lambda x:x%2==0,a)))
    odd=sorted(list(filter(lambda x:x&1,a)))
    if not odd or not even: print(0)
    else:
        i,n=0,len(even)
        while i<n:
            if even[i]<odd[-1]:
                odd[-1]+=even[i]
            else: break
            i+=1
        if i==n: print(n)
        else: print(n+1)