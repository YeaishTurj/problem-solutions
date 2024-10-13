for _ in range(int(input())):
    a=input()
    b=input()
    res=len(a)
    mx_match=0
    for i in range(len(b)):
        j,k=0,i
        while j<len(a) and k<len(b):
            if a[j]==b[k]:
                k+=1
            j+=1
        mx_match=max(mx_match,k-i)
    print(res+len(b)-mx_match)