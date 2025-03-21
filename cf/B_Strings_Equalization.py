for _ in range(int(input())):
    s1=input()
    s2=input()
    hash1=set(s1)
    hash2=set(s2)
    if hash1.intersection(hash2):
        print("YES")
    else:
        print("NO")