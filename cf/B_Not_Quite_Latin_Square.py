for _ in range(int(input())):
    s1=input()
    s2=input()
    s3=input()
    ch=ord('A')+ord('B')+ord('C')
    if '?' in s1:
        temp=0
        for it in s1:
            if it!='?': temp+=ord(it)
        print(chr(ch-temp))
    if '?' in s2:
        temp=0
        for it in s2:
            if it!='?': temp+=ord(it)
        print(chr(ch-temp))
    if '?' in s3:
        temp=0
        for it in s3:
            if it!='?': temp+=ord(it)
        print(chr(ch-temp)) 