str=input()
upperCase=sum(1 for it in str if it.isupper())
lowerCase=len(str)-upperCase
# print(lowerCase, upperCase)
if upperCase>lowerCase: print(str.upper())
else: print(str.lower())