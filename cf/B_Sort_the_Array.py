n=int(input())
decreasing=[]
a=list(map(int,input().split()))
i=0
cnt=0
while i<n-1:
    if a[i]-a[i+1]>0: cnt+=1
    else:
        if cnt: decreasing.append((i-cnt,i))
        cnt=0
    i+=1
if cnt: decreasing.append((i-cnt,i))
# print(decreasing)
if len(decreasing)==0: print("yes",1,1)
elif len(decreasing)>1: print("no")
else:
    # print(decreasing)
    for i in range(decreasing[0][0]-1):
        if a[i]-a[i+1]>0: 
            print("no")
            exit()
    for i in range(decreasing[0][1]+1, n-1):
        if a[i]-a[i+1]>0: 
            print("no")
            exit()
    if decreasing[0][0]:
        if a[decreasing[0][1]]-a[decreasing[0][0]-1]<0: 
            print("no")
            exit()
    if decreasing[0][1]<n-1:
        if a[decreasing[0][0]]-a[decreasing[0][1]+1]>0: 
            print("no")
            exit()
    print("yes", decreasing[0][0]+1, decreasing[0][1]+1)