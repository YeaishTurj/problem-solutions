n=int(input())
for i in range(2**n):
    s=bin(i)[2:].zfill(n+1)[::-1]
    s=list(int(x) for x in s)
    grey=[]
    for j in range(1,n+1):
        grey.append(s[j]^s[j-1])
    print("".join(str(x) for x in grey)[::-1])