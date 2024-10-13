str=input()
if str.isupper():
    print(str.lower())
elif str[0].islower() and str[1::].isupper():
    print(str[0].upper(),end="")
    print(str[1::].lower())
elif str[0].islower() and len(str)==1: print(str.upper())
else: print(str)