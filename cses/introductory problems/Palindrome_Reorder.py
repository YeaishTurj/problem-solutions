from collections import Counter
s=input()
hash=Counter(s)
odd,odd_char,res=0,"",""
for key in hash:
    if hash[key]&1: 
        odd+=1
        odd_char=key
    else:
        res+=key*(hash[key]//2)
if odd>1:
    print("NO SOLUTION")
else:
    print(res+odd_char*hash[odd_char]+res[::-1])
