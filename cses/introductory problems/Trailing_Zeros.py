n=int(input())
fives,ans=5,0
while fives<=n:
    ans+=n//fives
    fives*=5
print(ans)