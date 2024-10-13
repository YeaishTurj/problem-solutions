n=int(input())
a=list(map(int,input().split()))
free=0
crime=0
for it in a:
    if it!=-1: free+=it
    elif it==-1:
        if free>0: free-=1
        else: crime+=1
print(crime)