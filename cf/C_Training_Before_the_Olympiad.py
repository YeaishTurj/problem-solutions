import math
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    prefix=[]
    for i in range(n):
        if i: prefix.append(prefix[i-1]+a[i])
        else: prefix.append(a[i])
    odd=0
    for i in range(n):
        if a[i]&1: odd+=1
        if odd%3==0 and odd and i: prefix[i]-=odd//3
        elif odd%3==1 and odd and i: prefix[i]-=math.ceil(odd/3)
        elif odd%3==2 and odd and i: prefix[i]-=odd//3
    for it in prefix:
        print(it,end=" ")
    print()


# ooo3
# eo
# e1

# oooo4
# eoo
# eo1
# e1
    
# ooooo5
# eooo
# eoo1
# ee
# e

# oooooo6
# eoooo
# eooo1
# eeo
# ee1
# e

# ooooooo7
# eooooo
# eoooo1
# eeoo
# eeo1
# eo
# e1

# oooooooo8
# eoooooo
# eooooo1
# eeooo
# eeoo1
# eee
# ee
# e