n=input()
for i in range(len(n)):
    dig=ord(n[i])-ord('0')
    if i==0 and dig==9: print(dig,end="") 
    else: print(min(dig,9-dig),end="")