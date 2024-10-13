for _ in range(int(input())):
    n=int(input())
    mx=0
    for it in input():
        mx=max(mx,ord(it)-ord('a')+1)
    print(mx)