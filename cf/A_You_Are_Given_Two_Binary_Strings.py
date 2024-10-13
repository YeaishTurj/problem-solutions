for _ in range(int(input())):
    a=list(input())
    b=list(input())
    a.reverse()
    b.reverse()
    i=0
    while i<len(b):
        if b[i]=='1': break
        i+=1
    j=i
    while j<len(a):
        if a[j]=='1': break
        j+=1
    print(j-i)

# 1010
# 0011

# 10001
# 00110

# 1
# 1

# 1010101010101
# 0000011110000