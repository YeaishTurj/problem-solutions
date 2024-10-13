# 10 | k*x-r
k,r=map(int,input().split())
x=1
while True:
    if (k*x)%10==0 or (k*x-r)%10==0:
        print(x)
        exit()
    x+=1