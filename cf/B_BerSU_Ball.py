n=int(input())
a=list(map(int,input().split()))
m=int(input())
b=list(map(int,input().split()))
a.sort()
b.sort()
# print(a)
# print(b)
i=j=cnt=0
while i<n:
    temp=i
    temp2=j
    while j<m:
        if abs(a[i]-b[j])<=1:
            cnt+=1
            i+=1
            j+=1
            break
        else:j+=1
    if temp==i: 
        i+=1
        j=temp2
print(cnt)