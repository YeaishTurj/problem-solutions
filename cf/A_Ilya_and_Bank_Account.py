import math
n=int(input())
if n>=0: print(n)
else:
    n=abs(n)
    if n%10 >= (n//10)%10: print(n//10*-1)
    else: print((n%10+ (n//100)*10)*-1)