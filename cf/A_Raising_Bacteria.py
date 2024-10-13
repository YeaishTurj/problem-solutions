cnt=0
n=int(input())
while n:
    cnt+=n%2
    n//=2
print(cnt)