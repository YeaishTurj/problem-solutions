ans=0
for _ in range(int(input())):
    str=input()
    if str[1]=='+': ans+=1
    elif str[1]=='-': ans-=1
print(ans)