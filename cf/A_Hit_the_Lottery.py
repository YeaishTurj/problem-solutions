n=int(input())
bill=[100,20,10,5,1]
i=0
res=0
while i<len(bill) and n:
    res+=n//bill[i]
    n-=(n//bill[i])*bill[i]
    i+=1
print(res)