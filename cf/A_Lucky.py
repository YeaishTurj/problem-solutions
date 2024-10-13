for _ in range(int(input())):
    s=input()
    if sum(ord(s[i])-ord('0') for i in range(3))==sum(ord(s[i])-ord('0') for i in range(3,6)):
        print("YES")
    else: print("NO")