str=input()
vowel="aeiouy"
for it in str:
    ch=it.lower()
    if ch in vowel: continue
    else:
        print(".",end="")
        print(ch,end="") 