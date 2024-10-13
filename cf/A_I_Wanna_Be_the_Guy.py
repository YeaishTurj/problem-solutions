n=int(input())
x=list(map(int,input().split()))
y=list(map(int,input().split()))
s=set()
for i in range(x[0]):
    s.add(x[i+1])
for i in range(y[0]):
    s.add(y[i+1])
if n-len(s): print("Oh, my keyboard!")
else: print("I become the guy.")