import math
for _ in range(int(input())):
    n=int(input())
    dig=math.floor(math.log10(n)+1)
    # print(dig)
    res=9*(dig-1)
    num=0
    for _ in range(dig):
        num=10*num+n//pow(10,dig-1)
    # print(num)
    res+=num//pow(10,dig-1)
    if n<num: res-=1
    print(res)
# 9
# 11-1
# 22-2
# 33-3
# 44-4
# 99-9
# 111-1
# 222-2
# 333-3