n=input()
lucky_dig=sum(1 for it in n if it=='4' or it=='7')
if any(it!='4' and it!='7' for it in str(lucky_dig))==False: print("YES")
else: print("NO")