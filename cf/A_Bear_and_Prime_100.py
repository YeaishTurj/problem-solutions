import sys
prime=[]
for i in range(2,50):
    cnt=0
    for j in range(1,i+1):
        if i%j==0: cnt+=1
    if cnt==2: 
        prime.append(i)
        if i*i<101: prime.append(i*i)
cnt=1
for it in prime:
    print(it)
    i+=1
    sys.stdout.flush()
    s=input()
    if s=="yes": cnt+=1
if cnt==2 or cnt==1: print("prime")
else: print("composite")


# print(prime,len(prime))