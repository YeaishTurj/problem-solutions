for _ in range(int(input())):
    n=int(input())
    check=""
    s=input()
    prev='0'
    flag=1
    for it in s:
        if it!=prev and (it in check):
            flag=0
            break
        check+=it
        prev=it
    if flag: print("YES")
    else: print("NO")