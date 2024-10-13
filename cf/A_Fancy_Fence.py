for _ in range(int(input())):
    a=int(input())
    # a=180*(n-2)/n //
    n=360/(180-a)
    if int(n)==n: print("YES")
    else: print("NO")