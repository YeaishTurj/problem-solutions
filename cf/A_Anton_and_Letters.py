str=input()
s=set()
for it in str:
    if it!=' ' and it!=',' and it!='{' and it!='}':
        s.add(it)
print(len(s))