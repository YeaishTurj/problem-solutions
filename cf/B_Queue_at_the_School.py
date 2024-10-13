n,t=map(int,input().split())
str=input()
final=list(str)
for i in range(t):
    j=0
    while j<n-1:
        if final[j]<final[j+1]:
            final[j], final[j+1]=final[j+1], final[j]
            j+=2
        else: j+=1
print("".join(final))