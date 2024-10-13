import math
n,R=map(int,input().split())
# sin(theta)=r/(r+R)
# n=2pi/2(theta)=pi/theta
# theta=pi/n
# sin-1(r/(r+R))=pi/n
# r/(r+R)=sin(pi/n)=x
# r=rx+Rx
# r(1-x)=Rx
# r=Rx/(1-x)
x=math.sin(math.pi/n)
print(R*x/(1-x))