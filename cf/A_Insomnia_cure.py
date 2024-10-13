import sys
input=sys.stdin.readline
k=int(input())
l=int(input())
m=int(input())
n=int(input())
d=int(input())
hash=[0 for _ in range(d+1)]
for i in range(1,d+1):
    if i%k==0 or i%l==0 or i%m==0 or i%n==0: hash[i]=1
print(sum(hash))