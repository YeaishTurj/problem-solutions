n=int(input())
for i in range(1,n+1):
    if any(it!='4' and it!='7' for it in str(i))==False and n%i==0:
        print("YES")
        exit()
print("NO")