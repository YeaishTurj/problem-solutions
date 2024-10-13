# 1
# 4
# 10
# 20
# 35
# 56
# 6*7/2 + 5*6/2 + 4*5/2 + 3*4/2 + 2*3/2 1*2/2
# 7*6+6*5+5*4+4*3+3*2+2*1
n=int(input())
square=0
i=0
while square<=n:
    i+=1
    square+=i*(i+1)//2
if square==n: print(i)
else: print(i-1)