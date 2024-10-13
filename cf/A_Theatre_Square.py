import math
n,m,a=map(int,input().split())
case1=math.ceil(n/a)
case2=math.ceil(m/a)
print(case1*case2)