# a a//b
# 1 1 1  1 1 1  1 1 1  1 1 1  1 1 1  1 1 1  1 1
# 1 1 1  1 1 1 
# 1 1
a,b=map(int,input().split())
candles=0
while a:
    if a>=b:
        a-=b
        a+=1
        candles+=b
    else:
        candles+=a
        a-=a
print(candles)