i=1
a=[]
cnt=0
while cnt<=1000:
    if i%3!=0 and i%10!=3:
        a.append(i)
        cnt+=1
    i+=1
for _ in range(int(input())):
    print(a[int(input())-1])