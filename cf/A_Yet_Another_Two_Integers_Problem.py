import math
for _ in range(int(input())):
    a,b=map(int,input().split())
    # choose 1 to 10
    # + to a or - from a
    print(math.ceil(abs(b-a)/10))
