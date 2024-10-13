for _ in range(int(input())):
    s=input()
    ans=0
    for it in s:
        ans+=ord(it)-ord('0')
    print(ans)