s1=input()
s2=input()
for i in range(len(s1)):
    print(ord(s1[i])^ord(s2[i]),end="")