# a= 180(n-2)/n
# an=180n-360
# n=360/(180-a)
for _ in range(int(input())):
    a=int(input())
    if 360//(180-a)!=360/(180-a): print("NO")
    else: print("YES")