n=int(input())
s=set()
for i in range(1,n):
    if max(i,n-i)%min(i,n-i)==0:
        s.add((max(i,n-i),min(i,n-i)))
print(len(s))